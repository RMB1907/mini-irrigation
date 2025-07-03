// Define constants for pin numbers
const int soilSensorPin = A0;  // Analog pin for soil moisture sensor
const int soilSensorDigitalPin = 6;  // Digital pin for soil moisture sensor
const int relayPin = 3;  // Relay module control pin

// Set a threshold for soil moisture level
const int moistureThreshold = 500;  // Adjust this value based on your sensor and soil conditions

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set the relay pin as an OUTPUT
  pinMode(relayPin, OUTPUT);

  // Set the digital pin of the soil sensor as INPUT
  pinMode(soilSensorDigitalPin, INPUT);
}

void loop() {
  // Read the soil moisture level
  int soilMoisture = analogRead(soilSensorPin);

  // Read the digital output of the soil moisture sensor
  int digitalValue = digitalRead(soilSensorDigitalPin);

  // Print the soil moisture level and digital value to the Serial Monitor
  Serial.print("Soil Moisture (Analog): ");
  Serial.println(soilMoisture);
  Serial.print("Soil Moisture (Digital): ");
  Serial.println(digitalValue);

  // Check if soil moisture is below the threshold
  if (soilMoisture < moistureThreshold) {
    // Turn on the pump by activating the relay
    digitalWrite(relayPin, HIGH);
    Serial.println("Pump ON");
  } else {
    // Turn off the pump by deactivating the relay
    digitalWrite(relayPin, LOW);
    Serial.println("Pump OFF");
  }

  // Add a delay to avoid rapid changes in pump state
  delay(1000);  // Adjust the delay as needed
}
