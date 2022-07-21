int LED = 6; //setup the LED to port6
int potentiometer = A0; //setup the potentiometer to analog port A0
void setup(){
pinMode(LED,OUTPUT); // setup LED as an output
Serial.begin(9600);
}
void loop(){
int potentiometerValue = analogRead(potentiometer);
potentiometerValue=map(potentiometerValue,1,1024,1,255); //map potentiometer value to a range of 1 to 255
Serial.println(potentiometerValue);
analogWrite(LED,potentiometerValue); //send potentiometer value which is a value between 1 to 255, to the LED
}