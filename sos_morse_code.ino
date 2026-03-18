void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  // S - 3 short blinks
  digitalWrite(8, HIGH); delay(200);
  digitalWrite(8, LOW); delay(200);
  digitalWrite(8, HIGH); delay(200);
  digitalWrite(8, LOW); delay(200);
  digitalWrite(8, HIGH); delay(200);
  digitalWrite(8, LOW); delay(500); // gap before O

  // O - 3 long blinks
  digitalWrite(8, HIGH); delay(2000);
  digitalWrite(8, LOW); delay(200);
  digitalWrite(8, HIGH); delay(2000);
  digitalWrite(8, LOW); delay(200);
  digitalWrite(8, HIGH); delay(2000);
  digitalWrite(8, LOW); delay(500); // gap before S

  // S - 3 short blinks
  digitalWrite(8, HIGH); delay(200);
  digitalWrite(8, LOW); delay(200);
  digitalWrite(8, HIGH); delay(200);
  digitalWrite(8, LOW); delay(200);
  digitalWrite(8, HIGH); delay(200);
  digitalWrite(8, LOW); delay(1000); // pause before repeat
}
