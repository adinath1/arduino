// Adinath.S.Ajit
// 29-07-2019

//Laser transmitter and detecter 


#define DETECT 2 // pin 2 for  sensor
#define ACTION 8 // pin 8 for action to do someting


void setup() {
  Serial.begin(9600);
  pinMode(DETECT, INPUT);//define detect input pin
  pinMode(ACTION, OUTPUT);//define ACTION output pin
}

void loop() {
  int detected = digitalRead(DETECT);// read Laser sensor
  Serial.println(detected);
  if( detected == HIGH)
  {
    digitalWrite(ACTION,HIGH);// set the buzzer ON
    Serial.println("Detected!");
  }else{
    digitalWrite(ACTION,LOW); // Set the buzzer OFF
    Serial.println("No laser");
  }
  delay(1);
}
