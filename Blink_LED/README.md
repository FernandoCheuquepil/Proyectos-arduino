# Blink LED

Proyecto básico de Arduino que hace parpadear un LED.

## Descripción

Este sketch hace que un LED conectado al pin 13 (o el LED integrado en la placa) parpadee con intervalos de 1 segundo.

## Hardware requerido

- Arduino Uno (o compatible)
- LED (opcional, si no usas el LED integrado)
- Resistencia de 220Ω (si usas LED externo)

## Conexión

Si usas un LED externo:
1. Conecta el ánodo (pata larga) del LED al pin 13
2. Conecta el cátodo (pata corta) a través de una resistencia de 220Ω a GND

## Uso

1. Abre el archivo `Blink_LED.ino` en el Arduino IDE
2. Selecciona tu placa en Herramientas > Placa
3. Selecciona el puerto en Herramientas > Puerto
4. Sube el sketch a la placa
