#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();
  
  bool ARMADO = true;

  if (!ARMADO){
    pinMode(3, INPUT_PULLUP);
    while(digitalRead(3) != LOW){
        Serial.print("Looping");
        Serial.print('\n');
    }
  }
   else{
     pinMode(3, INPUT_PULLUP);
    if(digitalRead(3) == LOW){
      while(true){
        Serial.print("Looping");
        Serial.print('\n');
      }
    }
   }
  
  // Wait 500ms
  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  
  Keyboard.print("http://dazedimg.dazedgroup.netdna-cnd.com/786/azure/dazed-prod/1150/0/1150228.jpg");

  typeKey(KEY_RETURN);

  delay(100);

  // Opens up window and goes to a image I created xD
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  Keyboard.releaseAll();

  Keyboard.print("%userprofile%\\Desktop\\RICKROLL");

  typeKey(KEY_RETURN);

  // saving the picture to the user Desktop, pic name QUACKED...
  delay(100);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  // shows desktop
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  Keyboard.print("%userprofile%\\Desktop\\RICKROLL.jpg");

  typeKey(KEY_RETURN);

  // opens the png file
  typeKey(229);

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  // sets the background, and closes.
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  typeKey(229);

  Keyboard.print("v");

  Keyboard.print("d");

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
