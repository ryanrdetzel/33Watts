/*

Liquid Switch
Ryan Detzel - 33watts.com

*/

#define SENSORPIN 3

byte previousValue;

void setup() {
  Serial.begin(115200); 
  
  //Setup the input pin
  pinMode(SENSORPIN, INPUT);
  //Enable the pull-up resistor onboard
  digitalWrite(SENSORPIN, HIGH);
  
  previousValue = 1;
}

void loop() {
  byte currentValue = digitalRead(SENSORPIN);
  if (currentValue != previousValue){
    previousValue = currentValue;
    Serial.print("Changed:");
    Serial.println(currentValue);
  }
}
