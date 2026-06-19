/*
  Dave Williams, DitroniX 2019-2026 (ditronix.net)
  IPEM SIX - ESP32-C5 | ATM90E32 | WiFi 2.4/5GHz | Zigbee | Bluetooth | SIX Channel IoT Mains Power Energy Monitor

  June 2026: Example Code, to demonstrate and test the IPEM SIX
 
  Remember!
  - Set the BOARD to Use ESP32C5 Dev Module (or similar).
  - You can also set the BAUD rate up to 921600 to speed up flashing.
  - The SDK does NOT need external power to flash.  It will take Power from the USB 5V.
  - The Serial Monitor is configured for BAUD 115200
  
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

// Libraries

// **************** USER VARIABLES / DEFINES / STATIC / STRUCTURES / CONSTANTS ****************

// **************** OUTPUTS ****************
#define RS485_EN 23  // RS485 EN (GP23)

// **************** FUNCTIONS AND ROUTINES ****************

// **************** SETUP ****************
void setup() {
  // Stabalise
  delay(250);

  // Initialise UART
  Serial.begin(115200);
  while (!Serial)
    ;  // Wait for serial port to connect
  Serial.println("");

  // Initialise and Configure UART Matrix Select
  pinMode(RS485_EN, OUTPUT);
  digitalWrite(RS485_EN, HIGH);

  Serial.println("IPEM SIX Bring Up and Test Example Code");
}

// **************** LOOP ****************
void loop() {

  // Cycle RED LED
  digitalWrite(RS485_EN, LOW);
  delay(500);
  digitalWrite(RS485_EN, HIGH);
  delay(500);
}
