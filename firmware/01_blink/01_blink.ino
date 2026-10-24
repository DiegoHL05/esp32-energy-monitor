// 01_blink - Step 0: proves the board, cable, driver and upload all work.
const int LED_PIN = 2;   // the board's built-in blue LED

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("Blink started");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // LED on
  delay(500);                    // wait half a second
  digitalWrite(LED_PIN, LOW);    // LED off
  delay(500);
}