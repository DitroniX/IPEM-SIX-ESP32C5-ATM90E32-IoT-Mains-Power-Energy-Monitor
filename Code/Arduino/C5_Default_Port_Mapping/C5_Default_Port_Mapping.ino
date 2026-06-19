/*
  Dave Williams, DitroniX 2019-2026 (ditronix.net)
  IPEM SIX - ESP32-C5 | ATM90E32 | WiFi 2.4/5GHz | Zigbee | Bluetooth | SIX Channel IoT Mains Power Energy Monitor

  June 2026: Example Code, to demonstrate and test the IPEM SIX
 
  Remember!
  - Set the BOARD to Use ESP32C5 Dev Module (or similar).
  - You can also set the BAUD rate up to 921600 to speed up flashing.
  - The SDK does NOT need external power to flash.  It will take Power from the USB 5V.
  - The Serial Monitor is configured for BAUD 115200
  s
  The purpose of this test code is to cycle through the various main functions of the board as part of bring up testing.

  This test code is OPEN SOURCE and formatted for easier viewing.  Although is is not intended for real world use, it may be freely used, or modified as needed.
  It is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

  For board configuration, see github.com/DitroniX/IPEM-SIX-ESP32C5-ATM90E32-IoT-Mains-Power-Energy-Monitor/wiki/Arduino-IDE

  Further information, details and examples can be found on our website or github.com/DitroniX

  * ditronix.net
  * github.com/DitroniX
  * github.com/DitroniX/IPEM-SIX-ESP32C5-ATM90E32-IoT-Mains-Power-Energy-Monitor
  * github.com/DitroniX/IPEM-SIX-ESP32C5-ATM90E32-IoT-Mains-Power-Energy-Monitor/wiki
  * hackster.io/DitroniX/ipem-six-esp32c5-atm90e32-iot-mains-power-energy-monitor-e323bd
*/

/*
  ESP32-C5 Default Factory Serial Port Initialized
  MOSI: 8
  MISO: 9
  SCL / SCLK: 10
  CS / SS: 6
  SDA: 0
  SCL: 1
  IPEM SIX Bring Up and Test Example Code
*/

// Libraries
#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>

// **************** SETUP ****************
void setup() {
  // Stabalise
  delay(250);

  // Initialise UART
  Serial.begin(115200);
  while (!Serial)
    ;  // Wait for serial port to connect
  Serial.println("");

  Serial.println("\n\nESP32-C5 Default Factory Serial Port Initialized");

  Serial.print("MOSI: ");
  Serial.println(MOSI);

  Serial.print("MISO: ");
  Serial.println(MISO);

  Serial.print("SCL / SCLK: ");
  Serial.println(SCK);

  Serial.print("CS / SS: ");
  Serial.println(SS);

  Serial.print("SDA: ");
  Serial.println(SDA);

  Serial.print("SCL: ");
  Serial.println(SCL);

  Serial.println("IPEM SIX Bring Up and Test Example Code");
}

// **************** LOOP ****************
void loop() {}