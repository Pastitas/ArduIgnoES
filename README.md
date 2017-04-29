# ArduIgnoES

#ES

Librerias de arduino adapatadas para la inyección de teclas en teclados españoles.

ArduIgnoES es una traduccion para teclados en español de la libreria nativa de arduino Keyboard,
que originalmente solo permite la inyección de teclas en teclados querty americanos.

Con las modificaciones añadidas se permite el uso del dispositivo (Arduino Leonardo o Pro Micro)
como un dispositivo badUsb en teclados españoles.

El código es una modificación de https://github.com/arduino-libraries/Keyboard ,  y el concepto de badusb usando un arduino, y parte del código pertenecen a https://github.com/Seytonic/Duckduino-microSD



#ENG

Arduino keyboard library adapted for key injection and HID spoofing of spanish layout keyboards.

ArduIgnoES is a translation of sorts for spanish layout keyboards of the arduino Keyboard library, that by default only supports HID emulation of querty stardard american layouts.

With the modifications added it allows the device (Arduino Leonardo or Pro Micro)
to be used as a BadUsb device on spanish layout systems.

The base code that was modified was https://github.com/arduino-libraries/Keyboard , and the concept and some of the code of the firmware and payloads belong to https://github.com/Seytonic/Duckduino-microSD
