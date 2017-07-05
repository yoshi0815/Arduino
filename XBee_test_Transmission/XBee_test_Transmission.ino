// Transmission

void setup(){

  Serial.begin(9600);
}

void loop(){

  Serial.print('H');
  delay(2000);
  Serial.print('L');
  delay(2000);
}
