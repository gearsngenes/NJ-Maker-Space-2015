/*
 * PIR sensor tester
 */
 
int ledPin = 9;                // choose the pin for the LED
int inputPin = 10;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;   
int count =0;
// variable for reading the pin status
 
void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
 
  Serial.begin(9600);
}
 
void loop(){
  

  val = digitalRead(inputPin);  // read input value
  Serial.print("Value: "); Serial.print (val); Serial.print(" count: "); Serial.println(count);
  if (val==HIGH)
  {
    digitalWrite(ledPin,HIGH);
    Serial.println("motion detected...will check again in 8 secs");
    delay (8000);
  }
  else 
  {
    digitalWrite(ledPin,LOW);
  }
  
  count++;
  delay(10);

}
