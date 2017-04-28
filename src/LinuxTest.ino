#include <Keyboard.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse


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
  Keyboard.begin();

  // Start Payload
  // Author: .:Koryusai-Kun:.

  // Description: Used for phishing, it add's an ip of your choosing to the hosts file on windows

  // Description: so when the user types into there web browser for example www.facebook.com it

  // Description: insted of going to the proper ip it gose to the one in the host file your evil one.

  // Description: you need to add the www. version and with out it as well.

  // ---[Start CMD as administrator]-----------------------

  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(250);

  Keyboard.print("nvim");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("i");

  delay(50);

  Keyboard.print("PUSSY ASS NIGGA wtch");

  typeKey(KEY_RETURN);

  Keyboard.print("this works!");

  delay(50);

  typeKey(KEY_ESC);

  Keyboard.print(":wq juju");

  typeKey(KEY_RETURN);


  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}
// Unused
void loop() {}
