 /*
 * Generated with <3 by Dckuino.js, an open source project !
 * 
 */

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
  Serial.begin(9600);
  
  
  bool ARMADO = false;

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

  // Begining the Keyboard stream
  Keyboard.begin();
/*
  Keyboard.print("A");
  Keyboard.print("[");
  Keyboard.print("a");

  // Wait 500ms
  delay(500);

    // Ending stream
  Keyboard.end();
  Serial.end();
}
*/
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  

  delay(200);

  Keyboard.print("notepad.exe");

  typeKey(KEY_RETURN);

  delay(300);


  Keyboard.print("I will learn to lock my BOSS computer .");
  
  typeKey(KEY_RETURN);
  
  Keyboard.print("TEST () {} [] | # ~ @  !  -_ ;, :. % & \\/  'Q / = ? * ^  > < 1 ; ");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("testing abcdefghijklmnopqrstuvwxyz");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("Thank you.");

  typeKey(KEY_RETURN);


  // Ending stream
  Keyboard.end();
  Serial.end();
}

/* Unused endless loop                      */
void loop() {}



