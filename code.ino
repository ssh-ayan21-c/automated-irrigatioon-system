float moisture ;
int sensorReading ;
int TX_Pin = 1 ;
int RX_Pin = 0 ;

void setup() {

  Serial.begin(9600) ;
  
  pinMode(RX_Pin, INPUT) ;
  pinMode(TX_Pin, OUTPUT) ;
  
  pinMode(5, OUTPUT) ;
  pinMode(7, OUTPUT) ;

  digitalWrite(5, HIGH) ;
  digitalWrite(7, HIGH) ;
}

void loop() {

  sensorReading = analogRead(A0) ;

  moisture = ((1023 - sensorReading)/800.0)*100.0 ;
  
  if (Serial.available()) {
    char receivedChar = Serial.read() ;

    if(receivedChar == '1') {
      digitalWrite(5, HIGH) ;
    } else if (receivedChar == '0') {
      digitalWrite(5, LOW) ;
    }

    if(receivedChar == '3') {
      digitalWrite(7, HIGH) ;
    } else if (receivedChar == '4') {
      digitalWrite(7, LOW) ;
    }
  }

  if (moisture < 30.0) {
    digitalWrite(7, LOW) ;
  } else if (moisture >= 90.0) {
    digitalWrite(7, HIGH) ;
  }

  Serial.println(int(moisture)) ;
  delay(300) ;
}