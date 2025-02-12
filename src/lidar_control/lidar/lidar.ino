#include <SoftwareSerial.h>

SoftwareSerial tfLunaSerial(2, 3); // RX, TX (D2, D3)

void setup() {
  Serial.begin(115200);      // Initialize Serial for communication with PC
  tfLunaSerial.begin(115200); // Initialize SoftwareSerial for TF-Luna communication

  Serial.println("Starting UART communication...");
}

void loop() {
  if (tfLunaSerial.available()) {  // If there is data from TF-Luna
    byte data = tfLunaSerial.read();  // Read data from TF-Luna

    static byte packet[9];  // TF-Luna uses 9-byte packets in some modes, but 8 is common
    static byte packetIndex = 0;

    if (packetIndex == 0 && data == 0x59) {  // Check for start byte (0x59)
      packet[packetIndex++] = data; 
    } 
    else if (packetIndex == 1 && data == 0x59) { // Second 0x59 confirms valid packet
      packet[packetIndex++] = data;
    }
    else if (packetIndex > 1 && packetIndex < 8) { // Store remaining bytes
      packet[packetIndex++] = data;
    }
    else {
      // If invalid data, reset packet collection
      packetIndex = 0;
      return;
    }

    if (packetIndex == 8) { // Full packet received
      packetIndex = 0; // Reset for next packet

      // Print raw packet data for debugging
      // Serial.print("Packet: ");
      // for (int i = 0; i < 8; i++) {
      //   Serial.print(packet[i], HEX);
      //   Serial.print(" ");
      // }
      // Serial.println();

      // Correctly reconstruct the distance as an **unsigned 16-bit integer**
      uint16_t distance = (packet[3] << 8) | packet[2];  
      
      // Signal strength and temperature (optional debugging)
      uint16_t strength = (packet[5] << 8) | packet[4];
      uint16_t temp = (packet[7] << 8) | packet[6];

      // Print the calculated distance
      Serial.print("Distance: ");
      Serial.print(distance);
      Serial.println(" cm");

      // Serial.print("Signal Strength: ");
      // Serial.println(strength);

      // Serial.print("Temperature: ");
      // Serial.print(temp / 8.0 - 256);
      // Serial.println(" C");
    }
  } 

  // delay(5000);
}
