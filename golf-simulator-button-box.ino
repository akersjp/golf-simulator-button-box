#include <Keyboard.h>

// digital pin assignments
#define leftButton 2
#define rightButton 3
#define upButton 4
#define downButton 5
#define flyOverButton 6

void setup() {
  Serial.begin(57600);
  delay(200);
  
  Serial.println("Entering setup...");
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(leftButton, INPUT_PULLUP);
  pinMode(rightButton, INPUT_PULLUP);
  pinMode(upButton, INPUT_PULLUP);
  pinMode(downButton, INPUT_PULLUP);
  pinMode(flyOverButton, INPUT_PULLUP);
  
  Keyboard.begin();
}

void loop() {  
  // left button
  bool buttonState = digitalRead(leftButton);
  digitalWrite(LED_BUILTIN, buttonState);

  if(digitalRead(leftButton) == LOW) {
    Serial.println("Look LEFT!");
    Keyboard.press(KEY_LEFT_ARROW);
  }

  // right button
  buttonState = digitalRead(rightButton);
  digitalWrite(LED_BUILTIN, buttonState);

  if(digitalRead(rightButton) == LOW) {
    Serial.println("Look RIGHT!");
    Keyboard.press(KEY_RIGHT_ARROW);
  }
  
  // up button
  buttonState = digitalRead(upButton);
  digitalWrite(LED_BUILTIN, buttonState);

  if(digitalRead(upButton) == LOW) {
    Serial.println("club UP");
    Keyboard.press(KEY_UP_ARROW);
  }

  // down button
  buttonState = digitalRead(downButton);
  digitalWrite(LED_BUILTIN, buttonState);

  if(digitalRead(downButton) == LOW) {
    Serial.println("club DOWN");
    Keyboard.press(KEY_DOWN_ARROW);
  }

  // fly over button
  buttonState = digitalRead(flyOverButton);
  digitalWrite(LED_BUILTIN, buttonState);

  if(digitalRead(flyOverButton) == LOW) {
    Serial.println("club DOWN");
    Keyboard.press('f');
  }
  
  delay(150);
  Keyboard.releaseAll();
}
