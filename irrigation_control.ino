int motorPin = 12; 
int moisturePin = A0; 
int moisture = 0; 
void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT);
  pinMode(moisturePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  moisture = analogRead(moisturePin);
  Serial.println(moisture);
  
  if (moisture > 500) {
    Serial.println("turning motor ON");
  digitalWrite(motorPin, LOW); 
  delay(5000);
  } else {
    Serial.println("turning motor OFF");
  digitalWrite(motorPin, HIGH);
  }
}
