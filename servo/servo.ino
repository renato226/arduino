#include <Servo.h>

Servo myservo;
int pos = 0;

void setup() {
  Serial.begin(115200);
  myservo.attach(9);
  myservo.write(90);
}

void loop() {
  
  Serial.println(myservo.read());
  
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);  
    delay(15);
    
  }
  
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(15);    
  }
  
}
