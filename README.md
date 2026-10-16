# Arduino TempCheck

A beginner-friendly Arduino project that measures temperature and humidity using a DHT11 sensor and displays the readings on a 16×2 LCD. A push button allows the user to refresh the measurements.

## Features

- Measures temperature in Celsius
- Measures relative humidity
- Displays readings on a 16×2 LCD
- Refreshes measurements when the push button is pressed
- Shows a welcome screen when the Arduino starts

## Components Used

- Arduino Uno
- DHT11 temperature and humidity sensor
- 16×2 LCD
- Push button
- Breadboard and jumper wires
- Potentiometer for LCD contrast
- USB cable and required power connections

## Pin Connections

| Component | Arduino Pin |
|---|---|
| LCD RS | 12 |
| LCD Enable | 11 |
| LCD D4 | 5 |
| LCD D5 | 4 |
| LCD D6 | 3 |
| LCD D7 | 2 |
| DHT11 data | 6 |
| Refresh button | 7 |

The refresh button uses the Arduino's internal pull-up resistor (`INPUT_PULLUP`), so the button connects between digital pin 7 and GND.

Connect the LCD contrast potentiometer and power pins according to your circuit.

## Libraries Required

Install these libraries through the Arduino IDE Library Manager if they are not already installed:

- `LiquidCrystal`
- `DHT sensor library` by Adafruit

The Adafruit DHT library may also require the `Adafruit Unified Sensor` library.

## How It Works

1. The Arduino initializes the DHT11 sensor and LCD.
2. A welcome message appears on the LCD.
3. The sensor readings are collected and displayed.
4. Pressing the push button triggers a refresh, and the updated temperature and humidity are displayed.

## Getting Started

1. Open `tempcheck.ino` in the Arduino IDE.
2. Install the required libraries.
3. Connect the components according to the pin connections above.
4. Select your Arduino board and port.
5. Upload the sketch and view the readings on the LCD.
