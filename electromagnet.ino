int Electromagnet = 0;
int LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(Electromagnet, OUTPUT); //initalize digital pin as output
  pinMode(LED, OUTPUT);

}

void loop() {
    digitalWrite(Electromagnet, HIGH);  // turn the Electromagnet on (HIGH is the voltage level)
    digitalWrite(LED, HIGH);            // turn the LED on (HIGH is the voltage level)
    delay(3000);                        // wait for three seconds
    digitalWrite(Electromagnet, LOW);   // turn the Electromagnet off by making the voltage LOW
    digitalWrite(LED, LOW);             // turn the LED off by making the voltage LOW
    delay(3000);                        // wait for three seconds
         
}


