# Automatic Plant Watering System using Arduino

An Arduino-based system that monitors soil moisture and controls a water pump via a relay. The pump activates when moisture falls below a threshold and stops when sufficient moisture is detected.

---

## Components

| No. | Component              |
|-----|------------------------|
| 1   | Arduino UNO            |
| 2   | 5V relay module        |
| 3   | Soil moisture sensor   |
| 4   | Mini water pump        |
| 5   | Tubing                 |
| 6   | Jumper wires           |

---

## Pin Connections

| Arduino Pin | Connected to           |
|-------------|------------------------|
| A0          | Soil sensor (analog)   |
| D6          | Soil sensor (digital)  |
| D3          | Relay IN               |
| 5V, GND     | Sensor and relay power |

### Diagram

<img src="./connections.png" width="400"/>


---

