/*
  Blink LED
  Ejemplo básico que hace parpadear un LED conectado al pin 13.
  
  Este ejemplo demuestra el uso de digitalWrite() y delay().
*/

// Pin donde está conectado el LED (generalmente el LED integrado)
const int ledPin = 13;

void setup() {
  // Inicializa el pin digital como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Enciende el LED
  delay(1000);                  // Espera 1 segundo
  digitalWrite(ledPin, LOW);    // Apaga el LED
  delay(1000);                  // Espera 1 segundo
}
