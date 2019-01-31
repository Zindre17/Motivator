#include <LiquidCrystal.h>

//---- for setup of LCD and the button ----
const int d4 = 5;
const int d5 = 4;
const int d6 = 3;
const int d7 = 2;
const int e = 11;
const int rs = 12;
LiquidCrystal lcd(rs,e,d4,d5,d6,d7);
const int switchPin = 6;

//---- used for changing lines -----
const int maxLength = 16;
int lines = 0;
String* lineArray = 0;
int firstLineShowing = 0;

//---- used for checking when to update the display ----
const long timeBetweenLineChanges = 2000;
long timeAtLastLineChange = 0;

//---- used for handling buttonpresses ----
int switchState = 0;
int prevSwitchState = 0;
long lastButtonPress = 0;
const long debounceThreshold = 100;

//--- used for handling the quotes
const int q_size = 23;
String quotes[q_size] = {
"No guts, no story.",
"Screw it, let's do it.",
"Boldness be my friend.",
"Keep going. Be all in.",
"My life is my argument.",
"Dream big. Pray bigger.",
"Leave no stone unturned.",
"Fight till the last gasp.",
"Stay hungry. Stay foolish.",
"Broken crayons still color.",
"And so the adventure begins.",
"If you want it, work for it.",
"You can if you think you can.",
"Whatever you are, be a good one.",
"Impossible is for the unwilling.",
"Grow through what you go through.",
"The wisest mind has something yet to learn.",
"Take the risk or lose the chance.",
"Do it with passion or not at all.",
"She believed she could, so she did.",
"The past does not equal the future.",
"Good things happen to those who hustle.",
"At the end of hardship comes happiness."
};

void setup() {
  // put your setup code here, to run once: 
  lcd.begin(16,2);
  pinMode(switchPin, INPUT);
  lcd.print("Press the button");
  lcd.setCursor(0,1);
  lcd.print("for motivation!");
}

void loop() {
  // put your main code here, to run repeatedly:
  handleButton();
  checkIfTimeToUpdateDisplay();
}

//---- update what the lcd shows ----
void updateLcd(){
  timeAtLastLineChange = millis();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(lineArray[firstLineShowing]);
  if(lines > firstLineShowing+1){
    lcd.setCursor(0,1);
    lcd.print(lineArray[firstLineShowing+1]);
  }
}

//---- scroll down one line ----
void scrollDown(){
  firstLineShowing++;
  firstLineShowing%=lines;
  updateLcd();
}

//---- check if scrolling is necessary and if it is time for it ----
void checkIfTimeToUpdateDisplay(){
  if(lines >2){
    if(millis() - timeAtLastLineChange > timeBetweenLineChanges){
      //timeAtLastLineChange = millis();
      scrollDown(); 
    }
  }
}

//---- converts the quote to lines with less or equal to 16 characters ----
void prepareNextQuote(){
  
  int index = random(0,q_size*2)%q_size;
  String quote = quotes[index];
  int count = 1;
  int l = 1;
  for(int i = 0; i < quote.length(); i++){
    if(quote.charAt(i) == ' '){
      count++;
    }
  }
  
  int indexes[count];
  int ind = 0;
  for(int i = 0; i < quote.length(); i++){
    if(quote.charAt(i) == ' '){
      indexes[ind] = i;
      ind++;
    }
  }
  indexes[ind] = quote.length();
  int last = 0;
  for(int i = 0; i <= count; i++){
    if(indexes[i]-last > maxLength){
      l++;
      last = indexes[i-1]+1;
    }
  }
  int splits[l-1];
  last = 0;
  int at = 0;
  for(int i = 0; i <= count;i++){
    if(indexes[i] -last> maxLength){
      splits[at] = indexes[i-1];
      last = indexes[i-1];
      at++;
    }
  }
  
  lines = l;
  if(lineArray!=0)
    delete [] lineArray;
  lineArray = new String[l];
  int prev = 0;
  for(int i = 0; i<l; i++){
    if(i == l-1)
      lineArray[i] = quote.substring(prev);
    else
      lineArray[i] = quote.substring(prev, splits[i]);
    prev = splits[i]+1;
  }
  firstLineShowing = 0;
  updateLcd();
}


//---- register button presses and change qoute for every press ----
void handleButton(){
  switchState = digitalRead(switchPin);
  if(switchState != prevSwitchState && switchState == HIGH && millis()-lastButtonPress >debounceThreshold){
    lastButtonPress = millis();
    prepareNextQuote();
  }
  prevSwitchState = switchState;
}
