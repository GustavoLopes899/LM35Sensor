// Program to use a LM35 temperature's sensor with Arduino //

const float voltage_reference = 5;
const int LM35 = A3;
float temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  temperature = (float(analogRead(LM35)) * voltage_reference / (1023)) / 0.01;
  Serial.print("Temperature: ");
  Serial.println(temperature);
}
