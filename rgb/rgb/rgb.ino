void setup() {
  // put your setup code here, to run once:
  pinMode( 9, OUTPUT );
}

int r = 0;

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite( 9, r );
  
  delay(500);
}
