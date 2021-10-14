
void setup() {
  Serial.begin(9600);
  pinMode(1, OUTPUT);
}

void loop() {
    digitalWrite(1, HIGH);
    delay(5);
    digitalWrite(1, LOW);
}
