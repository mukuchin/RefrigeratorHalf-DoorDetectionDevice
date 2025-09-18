int OPEN_LED_PIN = 6;
int CLOSE_LED_PIN = 2;
int HALL_SENSOR_PIN1 = 7;
int HALL_SENSOR_PIN2 = 8;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(HALL_SENSOR_PIN, INPUT);
}

void loop() {
  if (digitalRead(HALL_SENSOR_PIN) == HIGH)
  {
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    delay(200);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  }
}