#define IN1 3
#define IN2 5
#define SLEEP 7

void setup() {
    Serial.begin(115200);
    
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(SLEEP, OUTPUT);
    
    digitalWrite(SLEEP, HIGH);
    Serial.println("DRV8833 Awake!");
}

void loop() {
    Serial.println("Testing Motor Forward...");
    analogWrite(IN1, 255); // Send PWM to IN1
    analogWrite(IN2, 0);   // Keep IN2 LOW
    delay(10000);

    Serial.println("Testing Motor Backward...");
    analogWrite(IN1, 0);
    analogWrite(IN2, 255);
    delay(10000);

    Serial.println("Stopping Motor...");
    analogWrite(IN1, 0);
    analogWrite(IN2, 0);
    delay(10000);
}
