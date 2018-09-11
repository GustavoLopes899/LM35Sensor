// Program to use a LM35 temperature's sensor with Arduino UNO //
// Have some problems with Arduino MEGA //

const float voltage_reference = 5;      // used to change the reference's voltage, could be changed depending of the board used
const int LM35 = A3;                    // sensor pin
float temperature;                      // temperature variable

void setup() {
  Serial.begin(9600);
}

void loop() {
  temperature = (voltage_reference * analogRead(LM35) * 100.0) / 1024;
  Serial.print("Temperature: ");
  Serial.println(temperature);
}
