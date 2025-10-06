# Sensor de Temperatura

Proyecto Arduino que lee la temperatura de un sensor analógico y muestra los valores en el Monitor Serial.

## Descripción

Este sketch lee valores de un sensor de temperatura TMP36 y los muestra en el Monitor Serial cada segundo.

## Hardware requerido

- Arduino Uno (o compatible)
- Sensor de temperatura TMP36
- Cables de conexión

## Conexión

Conexión del TMP36:
1. Pin izquierdo (Vcc) → 5V del Arduino
2. Pin central (Vout) → Pin A0 del Arduino
3. Pin derecho (GND) → GND del Arduino

**Importante:** Mira el sensor de frente (lado plano hacia ti) para identificar los pines correctamente.

## Uso

1. Abre el archivo `Sensor_Temperatura.ino` en el Arduino IDE
2. Selecciona tu placa en Herramientas > Placa
3. Selecciona el puerto en Herramientas > Puerto
4. Sube el sketch a la placa
5. Abre el Monitor Serial (Ctrl+Shift+M) a 9600 baudios para ver las lecturas
