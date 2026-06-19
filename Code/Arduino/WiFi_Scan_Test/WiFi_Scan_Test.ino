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
#include <WiFi.h>

// ****************  VARIABLES / DEFINES / STATIC ****************

// Constants
int WifiMaxAPScan = 8;  // Multiple WiFi Scan Maximum APs (Default 8)

WiFiClient client;  // Initialize the client library

char buffer[20];

// Return Some Meaningful Information From RSSI
String RSSI_Info(int RSSI_Value) {
  switch (-RSSI_Value)  // Inverted dBm Level ;)
  {
    {
      case 0 ... 30:
        return "Signal Very Strong";
        break;
      case 31 ... 50:
        return "Signal Excellent";
        break;
      case 51 ... 60:
        return "Signal Healthy";
        break;
      case 61 ... 70:
        return "Signal Very Good";
        break;
      case 71 ... 80:
        return "Signal Good";
        break;
      case 81 ... 90:
        return "Signal Poor - Try Moving Position";
        break;
      case 91 ... 100:
        return "Signal Very Low! - Move Position";
        break;
      default:
        return "No Signal :(";
        break;
    }
  }

}  // RSSI_Info

void setup() {

  // Stabalise
  delay(250);

  // Initialize UART:
  Serial.begin(115200, SERIAL_8N1);  //115200
  while (!Serial)
    ;

  // Set WiFi to station mode and disconnect from an AP if it was previously connected
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();

  Serial.println("IPEM SIX Bring Up and Test Example Code");
}

void loop() {

  Serial.println("\nIPEM SIX WiFi MAC \t " + WiFi.macAddress());
  Serial.println("Scanning for Access Points, or Routers.  Please wait....");
  delay(100);

  // WiFi.scanNetworks will return the number of networks found
  int n = WiFi.scanNetworks();
  Serial.print("Scan Complete.  ");

  if (n == 0) {
    Serial.println("No Access Points, or Routers, Found.");
  } else {
    Serial.print(n);
    Serial.println(" Access Points, or Routers, Found.");
    Serial.println("");

    for (int i = 0; i < n; ++i) {

      // Print SSID and RSSI for each network found
      Serial.print(i + 1);
      Serial.print(":");
      sprintf(buffer, "% 18s", WiFi.SSID(i));
      Serial.print(buffer);
      Serial.print("\t(");
      Serial.print("WiFi RSSI " + String(WiFi.RSSI(i)) + " dBm (" + RSSI_Info(WiFi.RSSI(i)) + ")");
      Serial.println((WiFi.encryptionType(i) == WIFI_AUTH_OPEN) ? " " : "*");

      // Do Not Unnecessarily Dither - Scan first X Access Points Only
      if (i >= (WifiMaxAPScan - 1))
        break;
    }
  }

  delay(2000);
}
