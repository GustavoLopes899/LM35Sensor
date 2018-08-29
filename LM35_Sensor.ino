// Program to use a LM35 temperature's sensor with Arduino //

const int LM35 = A3;
float temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  temperature = (float(analogRead(LM35)) * 5 / (1023)) / 0.01;
  Serial.print("Temperature: ");
  Serial.println(temperature);
}
