
int ledpin=4;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop() {
    if(Serial.read()==1){
      digitalWrite(ledpin, HIGH);
      Serial.println("HIGH");
      delay(2000);
    }
    else{
      digitalWrite(ledpin, HIGH);
      Serial.println("LOW");
      delay(2000);
    }
}
