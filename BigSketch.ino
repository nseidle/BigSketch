/*
 A sketch that takes up a large amount of flash to measure bootload time.
 By: Nathan Seidle
 SparkFun Electronics
 Date: July 28th, 2014
 License: This code is public domain but you buy me a beer if you use 
 this and we meet someday (Beerware license).
 
 This sketch does nothing but blink and print a lot of text. The text occupies
 a lot of flash to demonstrate the time it takes to upload a large sketch.
 
 29,552 bytes on Aruino v1.0.5. This should load correctly on almost all Arduino Unos
 and their derivatives.
 
 */

const byte LED = 13;

void setup()
{
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop()
{
  while(1)
  {
    print_lots_of_text();
    
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
  }
}

void print_lots_of_text(void)
{
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  Serial.print(F("Long string that simply takes up space in flash. Long long strings that mean nothing. More text means more flash bytes. My voice is my passport."));
  
}
