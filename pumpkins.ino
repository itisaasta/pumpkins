#include <Adafruit_NeoPixel.h>

// This is the definition of notes by frequency
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;

// These are the pins the components are connected to
const int buzzerPin = 9;
const int ledPin1 = 12;
const int ledPin2 = 13;
#define PIN 10
 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);

int counter = 0;
boolean hasplayed = false;

// Choose the notes you want to play here - this is the Star Wars theme song
int melodya[] = {a, a, a, f, cH, a, f, cH, a};
int beatsa[] = {500, 500, 500, 350, 150, 500, 350, 150, 650};

int melodyb[] = {eH, eH, eH, fH, cH, gS, f, cH, a};
int beatsb[] = {500, 500, 500, 350, 150, 500, 350, 150, 650};

int melodyc[] = {aH, a, a, aH, gSH, gH, fSH, fH, fSH};
int beatsc[] = {500, 300, 150, 500, 325, 175, 125, 125, 250};

int melodyd[] = {aS, dSH, dH, cSH, cH, b, cH};
int beatsd[] = {250, 500, 325, 175, 125, 125, 250};

int melodye[] = {f, gS, f, a, cH, a, cH, eH};
int beatse[] = {250, 500, 350, 125, 500, 375, 125, 650};

int melodyf[] = {f, gS, f, cH, a, f, cH, a};
int beatsf[] = {250, 500, 375, 125, 500, 375, 125, 650};

void setup()
{
  //Setup pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  strip.begin();
  strip.setBrightness(50);
  strip.show();
}
 
void loop()
{
  //If you want to have the music play continuously, remove the below line
  if (hasplayed == true){ return;}
  for (int i=0; i<sizeof(melodya)/sizeof(*melodya); i++) {
    beep(melodya[i], beatsa[i]);
  }
  delay(500);
  for (int i=0; i<sizeof(melodyb)/sizeof(*melodyb); i++) {
    beep(melodyb[i], beatsb[i]);
  }
  delay(500);
  for (int i=0; i<sizeof(melodyc)/sizeof(*melodyc); i++) {
    beep(melodyc[i], beatsc[i]);
  }
  delay(325);
  for (int i=0; i<sizeof(melodyd)/sizeof(*melodyd); i++) {
    beep(melodyd[i], beatsd[i]);
  }
  delay(350);
  for (int i=0; i<sizeof(melodye)/sizeof(*melodye); i++) {
    beep(melodye[i], beatse[i]);
  }
  delay(500);
  for (int i=0; i<sizeof(melodyc)/sizeof(*melodyc); i++) {
    beep(melodyc[i], beatsc[i]);
  }
  delay(325);
  for (int i=0; i<sizeof(melodyd)/sizeof(*melodyd); i++) {
    beep(melodyd[i], beatsd[i]);
  }
  delay(350);
  for (int i=0; i<sizeof(melodyf)/sizeof(*melodyf); i++) {
    beep(melodyf[i], beatsf[i]);
  }
  delay(650);

  hasplayed = true;
}
 
void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
 
  //Blink the light depending on value of 'counter'
  if(counter % 2 == 0)
  {
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.show();
    delay(duration);
  }else
  {
    delay(duration);
    strip.setPixelColor(0, strip.Color(0, 0, 0));
    strip.show();
  }
 
  //Stop tone on buzzerPin
  noTone(buzzerPin);
 
  delay(50);
 
  //Increment counter
  counter++;
}
