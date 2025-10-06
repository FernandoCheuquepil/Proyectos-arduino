/*
  Sensor de Temperatura
  Lee la temperatura de un sensor analógico (como el TMP36)
  y muestra los valores en el Monitor Serial.
*/

const int sensorPin = A0;  // Pin analógico donde está conectado el sensor

void setup() {
  // Inicia la comunicación serial a 9600 baudios
  Serial.begin(9600);
}

void loop() {
  // Lee el valor del sensor (0-1023)
  int sensorValue = analogRead(sensorPin);
  
  // Convierte el valor a voltaje (0-5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Convierte el voltaje a temperatura en grados Celsius
  // Para TMP36: (voltage - 0.5) * 100
  float temperatureC = (voltage - 0.5) * 100.0;
  
  // Muestra los valores en el Monitor Serial
  Serial.print("Temperatura: ");
  Serial.print(temperatureC);
  Serial.println(" °C");
  
  delay(1000);  // Espera 1 segundo antes de la siguiente lectura
}
