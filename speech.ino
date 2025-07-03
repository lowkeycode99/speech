#define HEATER_PIN 2
#define COFFEE_PIN 4
#define LAMP_PIN 5

void setup() {
  Serial.begin(115200);
  pinMode(HEATER_PIN, OUTPUT);
  pinMode(COFFEE_PIN, OUTPUT);
  pinMode(LAMP_PIN, OUTPUT);

  digitalWrite(HEATER_PIN, LOW);
  digitalWrite(COFFEE_PIN, LOW);
  digitalWrite(LAMP_PIN, LOW);

  Serial.println("Type commands to control appliances:");
  Serial.println("H = Heater ON, h = Heater OFF");
  Serial.println("C = Coffee Machine ON, c = Coffee Machine OFF");
  Serial.println("T = Table Lamp ON, t = Table Lamp OFF");
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read();
    if (cmd == 'H') {
      digitalWrite(HEATER_PIN, HIGH);
      Serial.println("Heater ON");
    } else if (cmd == 'h') {
      digitalWrite(HEATER_PIN, LOW);
      Serial.println("Heater OFF");
    } else if (cmd == 'C') {
      digitalWrite(COFFEE_PIN, HIGH);
      Serial.println("Coffee Machine ON");
    } else if (cmd == 'c') {
      digitalWrite(COFFEE_PIN, LOW);
      Serial.println("Coffee Machine OFF");
    } else if (cmd == 'T') {
      digitalWrite(LAMP_PIN, HIGH);
      Serial.println("Table Lamp ON");
    } else if (cmd == 't') {
      digitalWrite(LAMP_PIN, LOW);
      Serial.println("Table Lamp OFF");
    }
  }
}
