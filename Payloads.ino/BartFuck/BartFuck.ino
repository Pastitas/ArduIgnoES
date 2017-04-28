/*
 * Generated with <3 by Dckuino.js, an open source project !
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
  // Begining the Keyboard stream
  Keyboard.begin();
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


  // Wait 500ms
  delay(5000);


  // Lock Me 0.3 - Script opens Notepad and types a message concerning locking the computer - by SurfKahuna (RJC)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("notepad.exe");

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print("           , ,\\ ,'\\,'\\ ,'\\ ,\\ ,");

  typeKey(KEY_RETURN);

  Keyboard.print("     ,  ,\\/ \\' `'     `   '  /|");

  typeKey(KEY_RETURN);

  Keyboard.print("     |\\/                      |");

  typeKey(KEY_RETURN);

  Keyboard.print("     :                        |");

  typeKey(KEY_RETURN);

  Keyboard.print("     :                        |");

  typeKey(KEY_RETURN);

  Keyboard.print("     |                       |");

  typeKey(KEY_RETURN);

  Keyboard.print("     |                       |");

  typeKey(KEY_RETURN);

  Keyboard.print("     :               -.     _|");

  typeKey(KEY_RETURN);

  Keyboard.print("     :                \\     `.");

  typeKey(KEY_RETURN);

  Keyboard.print("     |         ________:______\\");

  typeKey(KEY_RETURN);

  Keyboard.print("     :       ,'o       / o    ,");

  typeKey(KEY_RETURN);

  Keyboard.print("     :       \\       ,'-----./");

  typeKey(KEY_RETURN);

  Keyboard.print("      \\_      `--.--'        )");

  typeKey(KEY_RETURN);

  Keyboard.print("     ,` `.              ,---'|");

  typeKey(KEY_RETURN);

  Keyboard.print("     : `                     |");

  typeKey(KEY_RETURN);

  Keyboard.print("      `,-'                   |");

  typeKey(KEY_RETURN);

  Keyboard.print("      /      ,---.          ,'");

  typeKey(KEY_RETURN);

  Keyboard.print("   ,-'            `-,------'");

  typeKey(KEY_RETURN);

  Keyboard.print("   `.        ,--'");

  typeKey(KEY_RETURN);

  Keyboard.print("     `-.____/");

  typeKey(KEY_RETURN);

  Keyboard.print("            \\");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  Keyboard.print("I will learn to lock my computer.");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("There, just like Bart Simpson.");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("Please remember to lock your computer when you step away from your desk.");

  typeKey(KEY_RETURN);

  typeKey(229);

  typeKey(KEY_RETURN);

  Keyboard.print("Thank you.");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  Keyboard.print("x");

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
