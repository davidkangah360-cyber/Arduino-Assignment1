int startValue = 5;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);

  Serial.begin(8000); // Serial Monitor Initialization
  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;
  while (count != 0) {
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(6); // flashes LED Pin
    delay(500);

    count = count - 1;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // put your main code here, to run repeatedly:
}

void flashLED(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH); // LED ON
    delay(200);
    digitalWrite(ledPin, LOW);  // LED OFF
    delay(200);
  }
}
