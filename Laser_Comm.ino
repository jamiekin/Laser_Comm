const int transistorPin = 13;    // connected to the base of the transistor

void setup() {
   // set  the transistor pin as output:
   pinMode(transistorPin, OUTPUT);
 }

 void loop() {
   digitalWrite(transistorPin, HIGH);
   delay(20);
   digitalWrite(transistorPin, LOW);
   delay(20);
 }
