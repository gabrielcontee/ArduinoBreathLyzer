int nextDelay = 50;
uint8_t byteRead = 0;
int heatingTime = 10000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Heating... \n");
  pinMode(A1, INPUT);
  delay(heatingTime);
  Serial.println("Ready!");
}

void loop() {

  float alcoholValue = analogRead(A1);
  alcoholValue = (0.4 * alcoholValue)/220;
  Serial.println(alcoholValue);

//  if( Serial.available() > 0 ) {
//    byteRead = Serial.read();
//
////    if( byteRead == 'A' ) {
//      Serial.println(alcoholValue);
//      Serial.write(alcoholValue);
////    }
//  } else {
//    Serial.println("-");
//  }

  delay(nextDelay);
}
