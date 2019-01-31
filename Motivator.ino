#include <LiquidCrystal.h>
#include <avr/pgmspace.h>

const char string_0[] PROGMEM = "No guts, no story.";
const char string_1[] PROGMEM = "My life is my message.";
const char string_2[] PROGMEM = "Screw it, let's do it.";
const char string_3[] PROGMEM = "Boldness be my friend.";
const char string_4[] PROGMEM = "Keep going. Be all in.";
const char string_5[] PROGMEM = "My life is my argument.";
const char string_6[] PROGMEM = "Dream big. Pray bigger.";
const char string_7[] PROGMEM = "Leave no stone unturned.";
const char string_8[] PROGMEM = "Fight till the last gasp.";
const char string_9[] PROGMEM = "Stay hungry. Stay foolish.";
const char string_10[] PROGMEM = "Broken crayons still color.";
const char string_11[] PROGMEM = "And so the adventure begins.";
const char string_12[] PROGMEM = "If you want it, work for it.";
const char string_13[] PROGMEM = "You can if you think you can.";
const char string_14[] PROGMEM = "Whatever you are, be a good one.";
const char string_15[] PROGMEM = "Impossible is for the unwilling.";
const char string_16[] PROGMEM = "Grow through what you go through.";
const char string_17[] PROGMEM = "The wisest mind has something yet to learn.";
const char string_18[] PROGMEM = "Take the risk or lose the chance.";
const char string_19[] PROGMEM = "Do it with passion or not at all.";
const char string_20[] PROGMEM = "She believed she could, so she did.";
const char string_21[] PROGMEM = "The past does not equal the future.";
const char string_22[] PROGMEM = "Good things happen to those who hustle.";
const char string_23[] PROGMEM = "At the end of hardship comes happiness.";
const char string_24[] PROGMEM = "Don't dream your life, live your dream.";
const char string_25[] PROGMEM = "If it matters to you, you'll find a way.";
const char string_26[] PROGMEM = "Forget about style; worry about results.";
const char string_27[] PROGMEM = "Whatever you do, do with all your might.";
const char string_28[] PROGMEM = "Dream without fear. Love without limits.";
const char string_29[] PROGMEM = "Every noble work is at first impossible.";
const char string_30[] PROGMEM = "If you're going through hell, keep going.";
const char string_31[] PROGMEM = "You can do anything you set your mind to.";
const char string_32[] PROGMEM = "We are twice armed if we fight with faith.";
const char string_33[] PROGMEM = "Open your mind. Get up off the couch. Move.";
const char string_34[] PROGMEM = "Be faithful to that which exists within yourself.";
const char string_35[] PROGMEM = "Persistence guarantees that results are inevitable.";
const char string_36[] PROGMEM = "In life you need either inspiration or desperation.";
const char string_37[] PROGMEM = "I would rather die on my feet than live on my knees.";
const char string_38[] PROGMEM = "The true success is the person who invented himself.";
const char string_39[] PROGMEM = "Don't tell people your plans. Show them your results.";
const char string_40[] PROGMEM = "Let him that would move the world first move himself.";
const char string_41[] PROGMEM = "Go forth on your path, as it exists only through your walking.";
const char string_42[] PROGMEM = "We can do anything we want to if we stick to it long enough.";
const char string_43[] PROGMEM = "It does not matter how slowly you go as long as you do not stop.";
const char string_44[] PROGMEM = "It is better to live one day as a lion, than a thousand days as a lamb.";
const char string_45[] PROGMEM = "Life is fragile. We're not guaranteed a tomorrow so give it everything you've got.";
const char string_46[] PROGMEM = "The two most important days in your life are the day you are born and they day you find out why.";
const char string_47[] PROGMEM = "Fall seven times, stand up eight. Japanese proverb (This is one of my favorite short quote.";
const char string_48[] PROGMEM = "You matter.";
const char string_49[] PROGMEM = "You are loved.";
const char string_50[] PROGMEM = "Actually, you can.";
const char string_51[] PROGMEM = "Focus on the good.";
const char string_52[] PROGMEM = "You are doing great.";
const char string_53[] PROGMEM = "We rise by lifting others.";
const char string_54[] PROGMEM = "Be happy. Be bright. Be you.";
const char string_55[] PROGMEM = "Every day is a second chance.";
const char string_56[] PROGMEM = "You are amazing. Remember that.";
const char string_57[] PROGMEM = "Darling, you are a work of art.";
const char string_58[] PROGMEM = "Each day provides its own gifts.";
const char string_59[] PROGMEM = "Happiness looks gorgeous on you.";
const char string_60[] PROGMEM = "You are capable of amazing things.";
const char string_61[] PROGMEM = "You are somebody's reason to smile.";
const char string_62[] PROGMEM = "Try Again. Fail again. Fail better.";
const char string_63[] PROGMEM = "Nothing is worth more than this day.";
const char string_64[] PROGMEM = "Think like a proton, always positive.";
const char string_65[] PROGMEM = "You are stronger than you think you are.";
const char string_66[] PROGMEM = "Focus on the journey, not the destination.";
const char string_67[] PROGMEM = "Believe you can and you're halfway there.";
const char string_68[] PROGMEM = "Once you choose hope, anything's possible.";
const char string_69[] PROGMEM = "You make mistakes. Mistakes don't make you.";
const char string_70[] PROGMEM = "Breathe. It's just a bad day, not a bad life.";
const char string_71[] PROGMEM = "The first step is you have to say that you can.";
const char string_72[] PROGMEM = "Start every day off with a smile and get it over with. W. C.";
const char string_73[] PROGMEM = "If you want to lift yourself up, lift up someone else. Booker T.";
const char string_74[] PROGMEM = "It's okay to not be okay as long as you are not giving up.";
const char string_75[] PROGMEM = "If you feel like giving up, look back at how far you've come.";
const char string_76[] PROGMEM = "Every day may not be good but there is something good in every day.";
const char string_77[] PROGMEM = "Don't go through life, grow through life.";
const char string_78[] PROGMEM = "A problem is a chance for you to do your best.";
const char string_79[] PROGMEM = "You are amazing. As you are. Stronger than you know. More beautiful than you think.";
const char string_80[] PROGMEM = "Everything is going to be okay in the end. If it's not the okay, it's not the end.";
const char string_81[] PROGMEM = "Love.";
const char string_82[] PROGMEM = "Begin.";
const char string_83[] PROGMEM = "Let go.";
const char string_84[] PROGMEM = "Breathe.";
const char string_85[] PROGMEM = "Slow down.";
const char string_86[] PROGMEM = "Let it be.";
const char string_87[] PROGMEM = "Go for it.";
const char string_88[] PROGMEM = "I love you.";
const char string_89[] PROGMEM = "Keep going.";
const char string_90[] PROGMEM = "Choose joy.";
const char string_91[] PROGMEM = "Enjoy today.";
const char string_92[] PROGMEM = "C'est la vie.";
const char string_93[] PROGMEM = "Choose happy.";
const char string_94[] PROGMEM = "Keep it cool.";
const char string_95[] PROGMEM = "Take it easy.";
const char string_96[] PROGMEM = "Be in the now.";
const char string_97[] PROGMEM = "Live the moment.";
const char string_98[] PROGMEM = "Choose to shine.";
const char string_99[] PROGMEM = "No pain, no gain.";
const char string_100[] PROGMEM = "Do it. With love.";
const char string_101[] PROGMEM = "Prove them wrong.";
const char string_102[] PROGMEM = "I can and I will.";
const char string_103[] PROGMEM = "It is what it is.";
const char string_104[] PROGMEM = "Love conquers all.";
const char string_105[] PROGMEM = "Keep your chin up.";
const char string_106[] PROGMEM = "Follow your heart.";
const char string_107[] PROGMEM = "Don't rush things.";
const char string_108[] PROGMEM = "You only live once.";
const char string_109[] PROGMEM = "Never stop dreaming.";
const char string_110[] PROGMEM = "Now is all you have.";
const char string_111[] PROGMEM = "Keep moving forward.";
const char string_112[] PROGMEM = "This too shall pass.";
const char string_113[] PROGMEM = "Every moment matters.";
const char string_114[] PROGMEM = "Love more. Worry less.";
const char string_115[] PROGMEM = "Dust settles. I don't.";
const char string_116[] PROGMEM = "Nothing lasts forever.";
const char string_117[] PROGMEM = "Work hard. Stay humble.";
const char string_118[] PROGMEM = "Enjoy the little things.";
const char string_119[] PROGMEM = "The best is yet to come.";
const char string_120[] PROGMEM = "Better things are coming.";
const char string_121[] PROGMEM = "Collect moments – not things.";
const char string_122[] PROGMEM = "Feel the fear and do it anyway.";
const char string_123[] PROGMEM = "When nothing goes right, go left.";
const char string_124[] PROGMEM = "Life is too short to learn German.";
const char string_125[] PROGMEM = "Why do they put pizza in a square box?";
const char string_126[] PROGMEM = "Do crabs think we walk sideways?";
const char string_127[] PROGMEM = "Don't be humble, you're not that great.";
const char string_128[] PROGMEM = "I intend to live forever. So far, so good.";
const char string_129[] PROGMEM = "My life feels like a test I didn't study for.";
const char string_130[] PROGMEM = "Why is there an expiration date on sour cream?";
const char string_131[] PROGMEM = "This suspense is terrible. I hope it will last.";
const char string_132[] PROGMEM = "I drive way too fast to worry about cholesterol.";
const char string_133[] PROGMEM = "A day without sunshine is like, you know, night.";
const char string_134[] PROGMEM = "In heaven, all the interesting people are missing.";
const char string_135[] PROGMEM = "The last woman I was in was the Statue of Liberty.";
const char string_136[] PROGMEM = "Women want love to be a novel. Men, a short story.";
const char string_137[] PROGMEM = "Guests, like fish, begin to smell after three days.";
const char string_138[] PROGMEM = "Go to Heaven for the climate, Hell for the company.";
const char string_139[] PROGMEM = "Whoever named it necking is a poor judge of anatomy.";
const char string_140[] PROGMEM = "Change is inevitable – except from a vending machine. Robert C.";
const char string_141[] PROGMEM = "I bet giraffes don't even know what farts smell like.";
const char string_142[] PROGMEM = "Every novel is a mystery novel if you never finish it.";
const char string_143[] PROGMEM = "Why is the slowest traffic of the day called ‘rush hour'?";
const char string_144[] PROGMEM = "It's easy to quit smoking. I've done it hundreds of times.";
const char string_145[] PROGMEM = "The risk I took was calculated, but man, I am bad at math.";
const char string_146[] PROGMEM = "I couldn't repair your brakes, so I made your horn louder.";
const char string_147[] PROGMEM = "Do not read the next sentence. You little rebel, I like you.";
const char string_148[] PROGMEM = "Just when I discovered the meaning of life, they changed it.";
const char string_149[] PROGMEM = "Always borrow money from a pessimist. He won't expect it back.";
const char string_150[] PROGMEM = "If truth is beauty, how come no one has their hair done in a library?";
const char string_151[] PROGMEM = "I love deadlines. I love the whooshing noise they make as they go by.";
const char string_152[] PROGMEM = "I never feel more alone than when I'm trying to put sunscreen on my back.";
const char string_153[] PROGMEM = "Those are my principles, and if you don't like them… well, I have others.";
const char string_154[] PROGMEM = "The key to eating healthy is not eating any food that has a TV commercial.";
const char string_155[] PROGMEM = "I've got to keep breathing. It'll be my worst business mistake if I don't.";
const char string_156[] PROGMEM = "There are three types of people in this world: those who can count, and those who can't.";
const char string_157[] PROGMEM = "The closest a person ever comes to perfection is when he fills out a job application form.";
const char string_158[] PROGMEM = "No rain. No flowers.";
const char string_159[] PROGMEM = "Shine like the stars.";
const char string_160[] PROGMEM = "You make my heart smile.";
const char string_161[] PROGMEM = "You will forever be my always.";
const char string_162[] PROGMEM = "Your voice is my favorite sound.";
const char string_163[] PROGMEM = "Throw kindness around like confetti.";
const char string_164[] PROGMEM = "My favorite place is inside your hug.";
const char string_165[] PROGMEM = "I still fall in love with you every day.";
const char string_166[] PROGMEM = "You smile, I smile. That's how it works.";
const char string_167[] PROGMEM = "She was a rainbow, but he was color blind.";
const char string_168[] PROGMEM = "We were born to be real, not to be perfect.";
const char string_169[] PROGMEM = "When I count my blessings, I count you twice.";
const char string_170[] PROGMEM = "By the way, I'm wearing the smile you gave me.";
const char string_171[] PROGMEM = "If you are not too long, I will wait here for you all my life.";
const char string_172[] PROGMEM = "When it rains look for rainbows. When it's dark look for stars.";
const char string_173[] PROGMEM = "To the world you may be one person, but to one person you are the world.";
const char string_174[] PROGMEM = "I love you not only for what you are, but for what I am when I am with you.";
const char string_175[] PROGMEM = "Be a voice. Not an echo.";
const char string_176[] PROGMEM = "Seek the seeker.";
const char string_177[] PROGMEM = "No pressure, no diamonds.";
const char string_178[] PROGMEM = "Every wall is a door.";
const char string_179[] PROGMEM = "The only truth is music.";
const char string_180[] PROGMEM = "Silence is an answer too.";
const char string_181[] PROGMEM = "Stay foolish to stay sane.";
const char string_182[] PROGMEM = "If youth knew; if age could.";
const char string_183[] PROGMEM = "Time is the soul of this world.";
const char string_184[] PROGMEM = "Stars can't shine without darkness.";
const char string_185[] PROGMEM = "He not busy being born is busy dying.";
const char string_186[] PROGMEM = "It takes a long time to become young.";
const char string_187[] PROGMEM = "Be who you needed when you were young.";
const char string_188[] PROGMEM = "Innocence is courage and clarity both.";
const char string_189[] PROGMEM = "Find what you love and let it kill you.";
const char string_190[] PROGMEM = "Sadness flies away on the wings of time.";
const char string_191[] PROGMEM = "I am not young enough to know everything.";
const char string_192[] PROGMEM = "Life is like the ocean, it goes up and down.";
const char string_193[] PROGMEM = "The eyes are useless when the mind is blind.";
const char string_194[] PROGMEM = "If you're not confused, you're not paying attention.";
const char string_195[] PROGMEM = "You've gotta know what death is to know life.";
const char string_196[] PROGMEM = "Don't let yesterday take up too much of today.";
const char string_197[] PROGMEM = "Forgiveness is giving up hope for a better past.";
const char string_198[] PROGMEM = "Be kind to unkind people, they need it the most.";
const char string_199[] PROGMEM = "Solitary trees, if they grow at all, grow strong.";
const char string_200[] PROGMEM = "Character like a photograph, develops in darkness.";
const char string_201[] PROGMEM = "The bird a nest, the spider a web, man friendship.";
const char string_202[] PROGMEM = "Life is a question and how we live it is our answer.";
const char string_203[] PROGMEM = "God provides the wind, but man must raise the sails.";
const char string_204[] PROGMEM = "Art is the lie that enables us to realize the truth.";
const char string_205[] PROGMEM = "Enlightenment is when a wave realizes it is the ocean.";
const char string_206[] PROGMEM = "The truth isn't always beauty, but the hunger for it is.";
const char string_207[] PROGMEM = "This is your life, and it's ending one minute at a time.";
const char string_208[] PROGMEM = "Hearts are wild creatures, that's why our ribs are cages.";
const char string_209[] PROGMEM = "Life without love is like a tree without blossoms or fruit.";
const char string_210[] PROGMEM = "Your faith can move mountains and your doubt can create them.";
const char string_211[] PROGMEM = "The knowledge of happiness brings the knowledge of unhappiness.";
const char string_212[] PROGMEM = "There are those who give with joy, and that joy is their reward.";
const char string_213[] PROGMEM = "Life is the car, your heart is the key and God is the chauffeur.";
const char string_214[] PROGMEM = "You are not a drop in the ocean. You are the entire ocean in a drop.";
const char string_215[] PROGMEM = "Normality is a paved road: it's comfortable to walk, but no flowers grow on it.";
const char string_216[] PROGMEM = "One is never afraid of the unknown; one is afraid of the known coming to an end.";
const char string_217[] PROGMEM = "When you're happy you enjoy the music, when you're sad you understand the lyrics.";
const char string_218[] PROGMEM = "When you've seen beyond yourself, then you may find, peace of mind is waiting there.";
const char string_219[] PROGMEM = "You have to be odd to be number one. Dr.";
const char string_220[] PROGMEM = "Please all, and you will please none.";
const char string_221[] PROGMEM = "The fool wonders, the wise man asks.";
const char string_222[] PROGMEM = "A smooth sea never made a skillful sailor.";
const char string_223[] PROGMEM = "Pain is inevitable. Suffering is optional.";
const char string_224[] PROGMEM = "A man can't ride your back unless it's bent.";
const char string_225[] PROGMEM = "Don't raise your voice. Improve your argument.";
const char string_226[] PROGMEM = "Chop your own wood and it will warm you twice.";
const char string_227[] PROGMEM = "Some people are so poor, all they have is money.";
const char string_228[] PROGMEM = "All generalizations are false, including this one.";
const char string_229[] PROGMEM = "It's not what you look at that matters, it's what you see.";
const char string_230[] PROGMEM = "There is no saint without a past, no sinner without a future.";
const char string_231[] PROGMEM = "We make a living by what we get, but we make a life by what we give.";
const char string_232[] PROGMEM = "It's so strange that autumn is so beautiful; yet everything is dying.";
const char string_233[] PROGMEM = "It's no wonder that truth is stranger than fiction. Fiction has to make sense.";
const char string_234[] PROGMEM = "The man who wants to lead the orchestra must turn his back on the crowd.";
const char string_235[] PROGMEM = "What counts can't always be counted; what can be counted doesn't always count.";
const char string_236[] PROGMEM = "As a well-spent day brings happy sleep, so a life well spent brings happy death.";
const char string_237[] PROGMEM = "Life is not about how fast you run or how high you climb, but how well you bounce.";
const char string_238[] PROGMEM = "Concentration is the ability to think about absolutely nothing when it is absolutely necessary.";
const char string_239[] PROGMEM = "It is better to remain silent and be thought a fool than to open one's mouth and remove all doubt.";
const char string_240[] PROGMEM = "So it goes.";
const char string_241[] PROGMEM = "Live the life you've dreamed.";
const char string_242[] PROGMEM = "Life is not fair; get used to it.";
const char string_243[] PROGMEM = "Life is a long lesson in humility. James M.";
const char string_244[] PROGMEM = "Life is a lively process of becoming.";
const char string_245[] PROGMEM = "The unexamined life is not worth living.";
const char string_246[] PROGMEM = "Life is largely a matter of expectation.";
const char string_247[] PROGMEM = "Don't count the days. Make the days count.";
const char string_248[] PROGMEM = "Anything worth doing is worth doing slowly.";
const char string_249[] PROGMEM = "Don't wait. Life goes faster than you think.";
const char string_250[] PROGMEM = "Be soft. Do not let the world make you hard.";
const char string_251[] PROGMEM = "Life is too important to be taken seriously.";
const char string_252[] PROGMEM = "Life is either a daring adventure or nothing.";
const char string_253[] PROGMEM = "The sole meaning of life is to serve humanity.";
const char string_254[] PROGMEM = "Love the life you live. Lead the life you love.";
const char string_255[] PROGMEM = "Life is accepting what is and working from that.";
const char string_256[] PROGMEM = "We are all, right now, living the life we choose.";
const char string_257[] PROGMEM = "Not life, but good life, is to be chiefly valued.";
const char string_258[] PROGMEM = "Live your life, do your work, then take your hat.";
const char string_259[] PROGMEM = "Life got to be about more than just solving problems.";
const char string_260[] PROGMEM = "Life isn't as serious as the mind makes it out to be.";
const char string_261[] PROGMEM = "Life is about making an impact, not making an income.";
const char string_262[] PROGMEM = "The quality of life is more important than life itself.";
const char string_263[] PROGMEM = "You have to die a few times before you can really live.";
const char string_264[] PROGMEM = "What's coming will come and we'll meet it when it does.";
const char string_265[] PROGMEM = "Life shrinks or expands in proportion to one's courage.";
const char string_266[] PROGMEM = "Life is defined more by its risks than by its samenesses.";
const char string_267[] PROGMEM = "You only live once, but if you do it right, once is enough.";
const char string_268[] PROGMEM = "Sometimes life has its way with you when you least expect it.";
const char string_269[] PROGMEM = "Life isn't about getting and having, it's about giving and being.";
const char string_270[] PROGMEM = "Life can only be understood backwards; but it must be lived forwards.";
const char string_271[] PROGMEM = "Life is amazing. Life is fucking messy. Life is what you make of it.";
const char string_272[] PROGMEM = "Life is not a problem to be solved, but a reality to be experienced.";
const char string_273[] PROGMEM = "Nowadays people know the price of everything and the value of nothing.";
const char string_274[] PROGMEM = "Only one life that soon is past, only what's done with love will last.";
const char string_275[] PROGMEM = "Don't be afraid your life will end. Be afraid that it will never begin.";
const char string_276[] PROGMEM = "To live is the rarest thing in the world. Most people exist, that is all.";
const char string_277[] PROGMEM = "Life is like riding a bicycle. To keep your balance, you must keep moving.";
const char string_278[] PROGMEM = "In three words I can sum up everything I've learned about life: it goes on.";
const char string_279[] PROGMEM = "Life really does begin at forty. Up until then, you are just doing research.";
const char string_280[] PROGMEM = "The meaning of life is to find your gift. The purpose of life is to give it away.";
const char string_281[] PROGMEM = "Life, it seems, is nothing if not a series of initiations, transitions, and incorporations.";
const char string_282[] PROGMEM = "Life becomes harder for us when we live for others, but it also becomes richer and happier.";
const char string_283[] PROGMEM = "Life is not measured by the number of breaths we take, but by the moments that take our breath away.";
const char string_284[] PROGMEM = "Life is pure adventure, and the sooner we realize that, the quicker we will be able to treat life as art.";
const char string_285[] PROGMEM = "I've never been poor, only broke. Being poor is a frame of mind. Being broke is only a temporary situation.";
const char string_286[] PROGMEM = "Enjoy the little things in life because one day you'll look back and realize they were the big things.";
const char string_287[] PROGMEM = "I think people spend too much time staring into screens and not enough time drinking wine, tongue kissing, and dancing under the moon.";
const char string_288[] PROGMEM = "To love is to act.";
const char string_289[] PROGMEM = "All you need is love.";
const char string_290[] PROGMEM = "Do all things with love.";
const char string_291[] PROGMEM = "Every lover is a soldier.";
const char string_292[] PROGMEM = "Who, being loved, is poor?";
const char string_293[] PROGMEM = "Speak low, if you speak love.";
const char string_294[] PROGMEM = "Love is the absence of judgment.";
const char string_295[] PROGMEM = "If you wished to be loved, love.";
const char string_296[] PROGMEM = "Love the sinner and hate the sin.";
const char string_297[] PROGMEM = "If a thing loves, it is infinite.";
const char string_298[] PROGMEM = "In true love, you attain freedom.";
const char string_299[] PROGMEM = "Economized love is never real love.";
const char string_300[] PROGMEM = "Love does not dominate; it cultivates.";
const char string_301[] PROGMEM = "The more you judge, the less you love.";
const char string_302[] PROGMEM = "Lovers quarrels are the renewal of love.";
const char string_303[] PROGMEM = "Life is a game and true love is a trophy.";
const char string_304[] PROGMEM = "To love is to receive a glimpse of heaven.";
const char string_305[] PROGMEM = "Love is the flower you've got to let grow.";
const char string_306[] PROGMEM = "If love appears, boundaries will disappear.";
const char string_307[] PROGMEM = "Intense love does not measure, it just gives.";
const char string_308[] PROGMEM = "They do not love that do not show their love.";
const char string_309[] PROGMEM = "Absence sharpens love, presence strengthens it.";
const char string_310[] PROGMEM = "The more you love, the more you become lovable.";
const char string_311[] PROGMEM = "You cannot save people, you can just love them.";
const char string_312[] PROGMEM = "Love is a thing that is full of cares and fears.";
const char string_313[] PROGMEM = "It is love alone that gives worth to all things.";
const char string_314[] PROGMEM = "Life in abundance comes only through great love.";
const char string_315[] PROGMEM = "Love does not claim possession, but gives freedom.";
const char string_316[] PROGMEM = "The art of love is largely the art of persistence.";
const char string_317[] PROGMEM = "If you judge people, you have no time to love them.";
const char string_318[] PROGMEM = "Never love anyone who treats you like you're ordinary.";
const char string_319[] PROGMEM = "You give me the kind of feeling people write novels about.";
const char string_320[] PROGMEM = "Follow love and it will flee, flee love and it will follow.";
const char string_321[] PROGMEM = "Love is like the wind, you can't see it but you can feel it.";
const char string_322[] PROGMEM = "Stay away from people who make you feel like you're hard to love.";
const char string_323[] PROGMEM = "Perhaps one did not want to be loved so much as to be understood.";
const char string_324[] PROGMEM = "Never let an opportunity to tell someone how much they mean to you.";
const char string_325[] PROGMEM = "The quickest way to get someone's attention is to no longer want it.";
const char string_326[] PROGMEM = "True love is like ghosts, which everyone talks about and few have seen.";
const char string_327[] PROGMEM = "Spread love everywhere you go. Let no one ever come to you without leaving happier.";
const char string_328[] PROGMEM = "Do what you love. Know your own bone; gnaw at it, bury it, unearth it, and gnaw it still.";
const char string_329[] PROGMEM = "Love needs great courage. It needs great courage because it needs the sacrifice of the ego.";
const char string_330[] PROGMEM = "I don't have time to worry about who doesn't like me. I'm too busy loving people who love me.";
const char string_331[] PROGMEM = "Do not seek the because – in love there is no because, no reason, no explanation, no solutions.";
const char string_332[] PROGMEM = "Whoever loves becomes humble. Those who love have, so to speak, pawned a part of their narcissism.";
const char string_333[] PROGMEM = "You are enough.";
const char string_334[] PROGMEM = "Nobody is perfect.";
const char string_335[] PROGMEM = "Make yourself a priority.";
const char string_336[] PROGMEM = "This is who the fuck I am.";
const char string_337[] PROGMEM = "Find yourself, and be that.";
const char string_338[] PROGMEM = "Different doesn't mean wrong.";
const char string_339[] PROGMEM = "Where's your will to be weird?";
const char string_340[] PROGMEM = "And now I'll do what's best for me.";
const char string_341[] PROGMEM = "Above all things, reverence yourself.";
const char string_342[] PROGMEM = "Self-respect knows no considerations.";
const char string_343[] PROGMEM = "No one is laughable who laughs at himself.";
const char string_344[] PROGMEM = "Why fit in when you were born to stand out? Dr.";
const char string_345[] PROGMEM = "Personal love is concentrated universal love.";
const char string_346[] PROGMEM = "You are not designed for everyone to like you.";
const char string_347[] PROGMEM = "Accept who you are. Unless you're a serial killer.";
const char string_348[] PROGMEM = "Beauty begins the moment you decide to be yourself.";
const char string_349[] PROGMEM = "Wanting to be someone else is a waste of who you are.";
const char string_350[] PROGMEM = "To love oneself is the beginning of a lifelong romance.";
const char string_351[] PROGMEM = "Whatever makes you weird is probably your greatest asset.";
const char string_352[] PROGMEM = "If you are lonely when you're alone, you are in bad company.";
const char string_353[] PROGMEM = "The worst loneliness is not to be comfortable with yourself.";
const char string_354[] PROGMEM = "I'm currently under construction. Thank you for your patience.";
const char string_355[] PROGMEM = "The reward for conformity is that everyone likes you but yourself.";
const char string_356[] PROGMEM = "Be yourself. People don't have to like you, and you don't have to care.";
const char string_357[] PROGMEM = "Your value doesn't decrease based on someone's inability to see your worth.";
const char string_358[] PROGMEM = "It is better to be hated for what you are than to be loved for what you are not.";
const char string_359[] PROGMEM = "I found that there is only one thing that heals every problem, and that is: to know how to love yourself.";
const char string_360[] PROGMEM = "Smile, it's free therapy.";
const char string_361[] PROGMEM = "Freedom lies in being bold.";
const char string_362[] PROGMEM = "A happy wife is a happy life.";
const char string_363[] PROGMEM = "Happiness lies in perspective.";
const char string_364[] PROGMEM = "Boredom: the desire for desires.";
const char string_365[] PROGMEM = "Do more of what makes you happy.";
const char string_366[] PROGMEM = "Happiness depends upon ourselves.";
const char string_367[] PROGMEM = "The less I needed, the better I felt.";
const char string_368[] PROGMEM = "Be happy in the moment, that's enough.";
const char string_369[] PROGMEM = "Happiness can exist only in acceptance.";
const char string_370[] PROGMEM = "Man is the artificer of his own happiness.";
const char string_371[] PROGMEM = "One of the keys to happiness is a bad memory.";
const char string_372[] PROGMEM = "To live happily is an inward power of the soul.";
const char string_373[] PROGMEM = "Anything you're good at contributes to happiness.";
const char string_374[] PROGMEM = "A happy soul is the best shield for a cruel world.";
const char string_375[] PROGMEM = "There is no way to happiness. Happiness is the way.";
const char string_376[] PROGMEM = "Never expect anything. You'll never be disappointed.";
const char string_377[] PROGMEM = "Work out your own salvation. Do not depend on others.";
const char string_378[] PROGMEM = "Happiness is the absence of the pursuit of happiness.";
const char string_379[] PROGMEM = "Stay true to you and you will end up incredibly happy.";
const char string_380[] PROGMEM = "Happiness is needing less. Unhappiness is wanting more.";
const char string_381[] PROGMEM = "The best way to pay for a lovely moment is to enjoy it.";
const char string_382[] PROGMEM = "If you carry joy in your heart, you can heal any moment.";
const char string_383[] PROGMEM = "Life's greatest happiness is to be convinced we are loved.";
const char string_384[] PROGMEM = "Be happy with what you have. Be excited about what you want.";
const char string_385[] PROGMEM = "Find ecstasy in life; the mere sense of living is joy enough.";
const char string_386[] PROGMEM = "To be content means that you realize you contain what you seek.";
const char string_387[] PROGMEM = "Happy are those who dare courageously to defend what they love.";
const char string_388[] PROGMEM = "Whatever it is, find something to be excited about for tomorrow.";
const char string_389[] PROGMEM = "Doing what you like is freedom. Liking what you do is happiness.";
const char string_390[] PROGMEM = "The key to happiness is doing something you like every single day.";
const char string_391[] PROGMEM = "We don't laugh because we're happy – we're happy because we laugh.";
const char string_392[] PROGMEM = "Happiness is not a station you arrive at, but a manner of traveling.";
const char string_393[] PROGMEM = "True happiness arises, in the first place, from the enjoyment of one's self.";
const char string_394[] PROGMEM = "Base your happiness on taking action toward those goals, not on attaining them. Laura J.";
const char string_395[] PROGMEM = "A lifetime of happiness! No man alive could bear it: it would be hell on earth.";
const char string_396[] PROGMEM = "Most people have never learned that one of the main aims in life is to enjoy it.";
const char string_397[] PROGMEM = "Happiness cannot be accumulated. What is accumulated is always destructed by time.";
const char string_398[] PROGMEM = "Happiness resides not in possessions, and not in gold, happiness dwells in the soul.";
const char string_399[] PROGMEM = "A friend is a second self.";
const char string_400[] PROGMEM = "Choose people who lift you up.";
const char string_401[] PROGMEM = "Find your tribe. Love them hard.";
const char string_402[] PROGMEM = "Try to be a rainbow in someone's cloud.";
const char string_403[] PROGMEM = "Love is blind; friendship closes its eyes.";
const char string_404[] PROGMEM = "Any day spent with you is my favorite day.";
const char string_405[] PROGMEM = "The only way to have a friend is to be one.";
const char string_406[] PROGMEM = "Friends are the siblings God never gave us.";
const char string_407[] PROGMEM = "Rare as is true love, true friendship is rarer.";
const char string_408[] PROGMEM = "The good man is the friend of all living things.";
const char string_409[] PROGMEM = "One loyal friend is worth ten thousand relatives.";
const char string_410[] PROGMEM = "Treasure your relationships, not your possessions. Anthony J.";
const char string_411[] PROGMEM = "Friendship always benefits; love sometimes injures.";
const char string_412[] PROGMEM = "The language of friendship is not words but meanings.";
const char string_413[] PROGMEM = "Friends? You don't need more than your few close ones.";
const char string_414[] PROGMEM = "Wherever we are, it is our friends that make our world.";
const char string_415[] PROGMEM = "It's a beautiful thing to love others just as they are.";
const char string_416[] PROGMEM = "My best friend is the one who brings out the best in me.";
const char string_417[] PROGMEM = "If you have one true friend you have more than your share.";
const char string_418[] PROGMEM = "The real business of life is trying to understand each other.";
const char string_419[] PROGMEM = "People are lonely because they build walls instead of bridges. Joseph F.";
const char string_420[] PROGMEM = "Friends show their love in times of trouble, not in happiness.";
const char string_421[] PROGMEM = "A friend is someone who knows all about you and still loves you.";
const char string_422[] PROGMEM = "The greatest gift of life is friendship, and I have received it. Hubert H.";
const char string_423[] PROGMEM = "True friendship comes when the silence between two people is comfortable.";
const char string_424[] PROGMEM = "‘Enough' is a feast.";
const char string_425[] PROGMEM = "Count your blessings.";
const char string_426[] PROGMEM = "Be obsessively grateful.";
const char string_427[] PROGMEM = "Gratitude changes everything.";
const char string_428[] PROGMEM = "Gratitude is the sign of noble souls.";
const char string_429[] PROGMEM = "Start each day with a grateful heart.";
const char string_430[] PROGMEM = "Joy is the simplest form of gratitude.";
const char string_431[] PROGMEM = "Expect nothing and appreciate everything.";
const char string_432[] PROGMEM = "A grateful heart is a magnet for miracles.";
const char string_433[] PROGMEM = "Gratitude is riches. Complaint is poverty.";
const char string_434[] PROGMEM = "Silent gratitude isn't very much to anyone.";
const char string_435[] PROGMEM = "Don't forget who was with you from the start.";
const char string_436[] PROGMEM = "When one has a grateful heart, life is so beautiful. Roy T.";
const char string_437[] PROGMEM = "Don't cry because it's over, smile because it happened.";
const char string_438[] PROGMEM = "Gratitude is the fairest blossom which springs from the soul.";
const char string_439[] PROGMEM = "The essence of all beautiful art, all great art, is gratitude.";
const char string_440[] PROGMEM = "Pull over to the side of your journey and look how far you've come.";
const char string_441[] PROGMEM = "How lucky I am to have something that makes saying goodbye so hard.";
const char string_442[] PROGMEM = "Gratitude is not only the greatest of virtues, but the parent of all others.";
const char string_443[] PROGMEM = "Kindness is wisdom.";
const char string_444[] PROGMEM = "Kindness is contagious.";
const char string_445[] PROGMEM = "Fair and softly goes far.";
const char string_446[] PROGMEM = "Kindness is always beautiful.";
const char string_447[] PROGMEM = "Real kindness seeks no return.";
const char string_448[] PROGMEM = "Be gentle first with yourself.";
const char string_449[] PROGMEM = "Do small things with great love.";
const char string_450[] PROGMEM = "You will never regret being kind.";
const char string_451[] PROGMEM = "In the end, only kindness matters.";
const char string_452[] PROGMEM = "For it is in giving that we receive.";
const char string_453[] PROGMEM = "No one has ever become poor by giving.";
const char string_454[] PROGMEM = "Kind people are the best kind of people.";
const char string_455[] PROGMEM = "Kindness is not an act, it's a lifestyle.";
const char string_456[] PROGMEM = "The more sympathy you give, the less you need. Malcolm S.";
const char string_457[] PROGMEM = "In a world where you can be anything, be kind.";
const char string_458[] PROGMEM = "Be kind to unkind people. They need it the most.";
const char string_459[] PROGMEM = "Be kind whenever possible. It is always possible.";
const char string_460[] PROGMEM = "Kindness, I've discovered, is everything in life.";
const char string_461[] PROGMEM = "A warm smile is the universal language of kindness.";
const char string_462[] PROGMEM = "My religion is very simple. My religion is kindness.";
const char string_463[] PROGMEM = "Be somebody who makes everybody feel like a somebody.";
const char string_464[] PROGMEM = "We are all different. Don't judge, understand instead. Roy T.";
const char string_465[] PROGMEM = "If you can't feed a hundred people, then feed just one.";
const char string_466[] PROGMEM = "What wisdom can you find that is greater than kindness?";
const char string_467[] PROGMEM = "No act of kindness, no matter how small, is ever wasted.";
const char string_468[] PROGMEM = "You can accomplish by kindness what you cannot by force.";
const char string_469[] PROGMEM = "The end result of kindness is that it draws people to you.";
const char string_470[] PROGMEM = "Kindness is like snow – it beautifies everything it covers.";
const char string_471[] PROGMEM = "We shall never know all the good that a simple smile can do.";
const char string_472[] PROGMEM = "It's nice to be important, but it's more important to be nice.";
const char string_473[] PROGMEM = "How you make others feel about themselves says a lot about you.";
const char string_474[] PROGMEM = "Be kinder to yourself. And then let your kindness flood the world.";
const char string_475[] PROGMEM = "How do we change the world? One random act of kindness at the time.";
const char string_476[] PROGMEM = "I don't worry about people misinterpreting my kindness for weakness.";
const char string_477[] PROGMEM = "Wherever there is a human being, there is an opportunity for a kindness.";
const char string_478[] PROGMEM = "Do less. Be more.";
const char string_479[] PROGMEM = "You are your choices.";
const char string_480[] PROGMEM = "Be true to who you are.";
const char string_481[] PROGMEM = "My forte is awkwardness.";
const char string_482[] PROGMEM = "We are what we believe we are. C.S.";
const char string_483[] PROGMEM = "Do as you wish. Be as you are.";
const char string_484[] PROGMEM = "It's ok to put yourself first.";
const char string_485[] PROGMEM = "Know who you are and know it's enough.";
const char string_486[] PROGMEM = "The ultimate mystery is one's own self. Sammy Davis Jr.";
const char string_487[] PROGMEM = "Character is simply habit long continued.";
const char string_488[] PROGMEM = "This above all: to thine own self be true.";
const char string_489[] PROGMEM = "Adventure is not outside man; it is within.";
const char string_490[] PROGMEM = "You are who you are when nobody's watching.";
const char string_491[] PROGMEM = "To know oneself, one should assert oneself.";
const char string_492[] PROGMEM = "The things that we love tell us what we are.";
const char string_493[] PROGMEM = "When I am silent, I have thunder hidden inside.";
const char string_494[] PROGMEM = "I may be no better, but at least I am different.";
const char string_495[] PROGMEM = "There is no competition because nobody can be me.";
const char string_496[] PROGMEM = "I am not the perishable body, but the eternal Self.";
const char string_497[] PROGMEM = "What I'm looking for is not out there, it is in me.";
const char string_498[] PROGMEM = "Being entirely honest with oneself is a good exercise.";
const char string_499[] PROGMEM = "Sometimes it's only madness that makes us what we are.";
const char string_500[] PROGMEM = "As long as you can find yourself, you'll never starve.";
const char string_501[] PROGMEM = "Self-esteem is the reputation we acquire with ourselves.";
const char string_502[] PROGMEM = "Knowing others is wisdom, knowing yourself is enlightenment.";
const char string_503[] PROGMEM = "The only tyrant I accept in this world is the still voice within.";
const char string_504[] PROGMEM = "Getting in touch with your true self must be your first priority.";
const char string_505[] PROGMEM = "Life isn't about finding yourself. Life is about creating yourself.";
const char string_506[] PROGMEM = "Never be an imitator, be always original. Don't become a carbon copy.";
const char string_507[] PROGMEM = "The best way to find yourself is to lose yourself in the service of others.";
const char string_508[] PROGMEM = "Life is really a dance if you are original, and you are meant to be original.";
const char string_509[] PROGMEM = "He who controls others may be powerful, but he who has mastered himself is mightier still.";
const char string_510[] PROGMEM = "What you get by achieving your goals is not as important as what you become by achieving your goals.";
const char string_511[] PROGMEM = "Ingen kuk hardere enn livet.";

const int q_size = 512;
char buffer[300];
const char* const string_array[] PROGMEM = {
  string_0,string_1,string_2,string_3,string_4,string_5,string_6,string_7,string_8,string_9,string_10,string_11,string_12,string_13,string_14,string_15,string_16,string_17,string_18,string_19,string_20,string_21,string_22,string_23,string_24,string_25,string_26,string_27,string_28,string_29,string_30,string_31,string_32,string_33,string_34,string_35,string_36,string_37,string_38,string_39,string_40,string_41,string_42,string_43,string_44,string_45,string_46,string_47,string_48,string_49,string_50,string_51,string_52,string_53,string_54,string_55,string_56,string_57,string_58,string_59,string_60,string_61,string_62,string_63,string_64,string_65,string_66,string_67,string_68,string_69,string_70,string_71,string_72,string_73,string_74,string_75,string_76,string_77,string_78,string_79,string_80,string_81,string_82,string_83,string_84,string_85,string_86,string_87,string_88,string_89,string_90,string_91,string_92,string_93,string_94,string_95,string_96,string_97,string_98,string_99,string_100,string_101,string_102,string_103,string_104,string_105,string_106,string_107,string_108,string_109,string_110,string_111,string_112,string_113,string_114,string_115,string_116,string_117,string_118,string_119,string_120,string_121,string_122,string_123,string_124,string_125,string_126,string_127,string_128,string_129,string_130,string_131,string_132,string_133,string_134,string_135,string_136,string_137,string_138,string_139,string_140,string_141,string_142,string_143,string_144,string_145,string_146,string_147,string_148,string_149,string_150,string_151,string_152,string_153,string_154,string_155,string_156,string_157,string_158,string_159,string_160,string_161,string_162,string_163,string_164,string_165,string_166,string_167,string_168,string_169,string_170,string_171,string_172,string_173,string_174,string_175,string_176,string_177,string_178,string_179,string_180,string_181,string_182,string_183,string_184,string_185,string_186,string_187,string_188,string_189,string_190,string_191,string_192,string_193,string_194,string_195,string_196,string_197,string_198,string_199,string_200,string_201,string_202,string_203,string_204,string_205,string_206,string_207,string_208,string_209,string_210,string_211,string_212,string_213,string_214,string_215,string_216,string_217,string_218,string_219,string_220,string_221,string_222,string_223,string_224,string_225,string_226,string_227,string_228,string_229,string_230,string_231,string_232,string_233,string_234,string_235,string_236,string_237,string_238,string_239,string_240,string_241,string_242,string_243,string_244,string_245,string_246,string_247,string_248,string_249,string_250,string_251,string_252,string_253,string_254,string_255,string_256,string_257,string_258,string_259,string_260,string_261,string_262,string_263,string_264,string_265,string_266,string_267,string_268,string_269,string_270,string_271,string_272,string_273,string_274,string_275,string_276,string_277,string_278,string_279,string_280,string_281,string_282,string_283,string_284,string_285,string_286,string_287,string_288,string_289,string_290,string_291,string_292,string_293,string_294,string_295,string_296,string_297,string_298,string_299,string_300,string_301,string_302,string_303,string_304,string_305,string_306,string_307,string_308,string_309,string_310,string_311,string_312,string_313,string_314,string_315,string_316,string_317,string_318,string_319,string_320,string_321,string_322,string_323,string_324,string_325,string_326,string_327,string_328,string_329,string_330,string_331,string_332,string_333,string_334,string_335,string_336,string_337,string_338,string_339,string_340,string_341,string_342,string_343,string_344,string_345,string_346,string_347,string_348,string_349,string_350,string_351,string_352,string_353,string_354,string_355,string_356,string_357,string_358,string_359,string_360,string_361,string_362,string_363,string_364,string_365,string_366,string_367,string_368,string_369,string_370,string_371,string_372,string_373,string_374,string_375,string_376,string_377,string_378,string_379,string_380,string_381,string_382,string_383,string_384,string_385,string_386,string_387,string_388,string_389,string_390,string_391,string_392,string_393,string_394,string_395,string_396,string_397,string_398,string_399,string_400,string_401,string_402,string_403,string_404,string_405,string_406,string_407,string_408,string_409,string_410,string_411,string_412,string_413,string_414,string_415,string_416,string_417,string_418,string_419,string_420,string_421,string_422,string_423,string_424,string_425,string_426,string_427,string_428,string_429,string_430,string_431,string_432,string_433,string_434,string_435,string_436,string_437,string_438,string_439,string_440,string_441,string_442,string_443,string_444,string_445,string_446,string_447,string_448,string_449,string_450,string_451,string_452,string_453,string_454,string_455,string_456,string_457,string_458,string_459,string_460,string_461,string_462,string_463,string_464,string_465,string_466,string_467,string_468,string_469,string_470,string_471,string_472,string_473,string_474,string_475,string_476,string_477,string_478,string_479,string_480,string_481,string_482,string_483,string_484,string_485,string_486,string_487,string_488,string_489,string_490,string_491,string_492,string_493,string_494,string_495,string_496,string_497,string_498,string_499,string_500,string_501,string_502,string_503,string_504,string_505,string_506,string_507,string_508,string_509,string_510,string_511
};

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

void setup() {
  // put your setup code here, to run once: 
  randomSeed(analogRead(0));
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
  strcpy_P(buffer, (char*)pgm_read_word(&(string_array[index])));
  String quote = String(buffer);
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
  indexes[ind] = quote.length()-1;
  int last = 0;
  for(int i = 0; i < count; i++){
    if(indexes[i]-last > maxLength){
      l++;
      last = indexes[i-1]+1;
    }
  }
  int splits[l-1];
  last = 0;
  int at = 0;
  for(int i = 0; i < count;i++){
    if(indexes[i] -last> maxLength){
      splits[at] = indexes[i-1];
      last = indexes[i-1]+1;
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
