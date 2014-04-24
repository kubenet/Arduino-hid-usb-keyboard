#include <HIDKeyboard.h>

HIDKeyboard keyboard; // Initialize HIDKeyboard object

void setup() {
  keyboard.begin(); // Start communication
  delay(2000); // Wait for device to be found as a keyboard
}

void loop() {
  //Git example
  //string 2 

  // Эмулируем нажатие клавишь: Вверх, Вниз, Вправо, Влево
  
  keyboard.pressSpecialKey(RIGHTARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(UPARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(RIGHTARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(UPARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(UPARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(LEFTARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(UPARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(LEFTARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(UPARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(LEFTARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
  keyboard.pressSpecialKey(UPARROW); // Notice use of pressSpecialKey for ENTER
  keyboard.releaseKey();
  delay(100);
}
