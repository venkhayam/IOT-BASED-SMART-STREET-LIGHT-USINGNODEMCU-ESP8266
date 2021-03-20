const int ldr = A0;
int pir = D7;
void setup() {
  Serial.begin(9600);
  pinMode(D3, OUTPUT);
  pinMode(D7, INPUT);

}

void loop() {
  int state = digitalRead(D7);
  int ldr = analogRead(A0);
  if((ldr <= 100)&&(state == HIGH))
  {
    digitalWrite(D3, HIGH);
    Serial.print("LED IS ON");
    Serial.println(ldr);
    digitalWrite (D3, HIGH);
    Serial.println("Motion detected!");
    delay(0);
  }
  else
  {
    digitalWrite(D3, LOW);
    Serial.print("LED IS OFF");
    Serial.println(ldr);
    digitalWrite (D3, LOW);
    Serial.println("Motion absent!");
    delay(0);

  }
}
