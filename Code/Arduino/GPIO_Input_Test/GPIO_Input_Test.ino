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
#include <Adafruit_NeoPixel.h>

// ****************  VARIABLES / DEFINES / STATIC / STRUCTURES / CONSTANTS ****************

// **************** INPUTS ****************
#define User_GPIO 25

// **************** OUTPUTS ****************

// RGB
#define PIN_WS2812B 27  // The ESP32-C6 pin GPIO8 connected to WS2812B
Adafruit_NeoPixel ws2812b(2, PIN_WS2812B, NEO_GRB + NEO_KHZ800);

// **************** SETUP ****************
void setup() {

  // Stabalise
  delay(250);

  // Initialise UART
  Serial.begin(115200, SERIAL_8N1);  // 115200
  while (!Serial)
    ;
  Serial.println("");

  ws2812b.begin();  // Initialize WS2812B
  ws2812b.clear();  // Turn off RGB for two seconds

  // Turn off RGB
  ws2812b.clear();
  ws2812b.show();
  delay(250);

  // Configure GPIO Input
  pinMode(User_GPIO, INPUT);

  Serial.println("IPEM SIX Bring Up and Test Example Code");
  Serial.println("Ready for Input");
}

// **************** LOOP ****************
void loop() {

  // Turn off RGB
  ws2812b.clear();
  ws2812b.show();  // update to the WS2812B Led Strip
  delay(250);

  // Check for Button Press
  if (digitalRead(User_GPIO) == HIGH) {

    Serial.println("User User_GPIO");

    // BLUE
    ws2812b.setPixelColor(0, ws2812b.Color(0, 0, 150));
    ws2812b.show();
    delay(500);
  }
}
