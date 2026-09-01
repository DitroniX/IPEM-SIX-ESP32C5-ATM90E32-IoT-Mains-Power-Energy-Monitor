# IPEM SIX | ESP32C5 | DUAL ATM90E32AS IoT Mains Power Energy Monitor

**Supporting STEM Electronic Internet of Things & Home Automation Technology for Smart Energy Monitoring**

## Welcome to IPEM SIX

[![DitroniX WiKi Pages](https://github.com/DitroniX/IPEM-SIX-ESP32C5-ATM90E32-IoT-Mains-Power-Energy-Monitor/blob/main/Datasheets%20and%20Information/GitHub%20WiKi.png?raw=true)](https://github.com/DitroniX/IPEM-SIX-ESP32C5-ATM90E32-IoT-Mains-Power-Energy-Monitor/wiki)
[![DitroniX Discussions](https://github.com/DitroniX/DitroniX/blob/main/Files/GitHub%20Discussions.png?raw=true)](https://github.com/DitroniX/IPEM-SIX-ESP32C5-ATM90E32-IoT-Mains-Power-Energy-Monitor/discussions)
[![ESPHome - Home Assistant Integrations](https://github.com/DitroniX/DitroniX/blob/main/Files/Home%20Assistant%20-ESPHome%20Integration.png?raw=true)](https://github.com/DitroniX/Home-Assistant-Dev)
[![Compare DitroniX Mains Power IoT Energy Monitor Options](https://github.com/DitroniX/DitroniX/blob/main/Files/Compare%20DitroniX%20Energy%20Monitors.png?raw=true)](https://github.com/DitroniX/DitroniX/blob/main/Compare%20Mains%20Power%20Energy%20Monitors.md)

[**For Latest Project Updates - Click Here**](https://github.com/DitroniX/IPEM-SIX-ESP32C5-ATM90E32-IoT-Mains-Power-Energy-Monitor/tree/main#updates)

![IPEM SIX](https://github.com/DitroniX/IPEM-SIX-ESP32C5-ATM90E32-IoT-Mains-Power-Energy-Monitor/blob/main/Datasheets%20and%20Information/IPEM%20SIX%20-%20Overview.png)

![IPEM SIX Connections](https://github.com/DitroniX/IPEM-SIX-ESP32C5-ATM90E32-IoT-Mains-Power-Energy-Monitor/blob/main/Datasheets%20and%20Information/IPEM%20SIX%20-%20Terminal%20Connections.png)


**IPEM SIX**  is a self-contained, powerful ATM90E32 based, Smart Home and Industry Automation, Real-Time [Mains Power Energy Monitor](https://github.com/DitroniX/IPEM-SIX-ESP32C5-ATM90E32-IoT-Mains-Power-Energy-Monitor/wiki/What-is-a-Power-Energy-Monitor%3F) Board, and Kit.  No soldering required.

**IPEM SIX** C5 provides a complete energy monitoring platform:

✅ 6 Current channels for either CT Clamps or Rogowski Coil  
✅ Dual ATM90E32AS polyphase metering  
✅ Import/export detection  
✅ Per-channel energy tracking  
✅ Per-bank energy tracking  
✅ Home Assistant native integration (ESPHome)  
✅ WiFi diagnostics   
✅ Health monitoring  
✅ Configurable load alerts  
✅ OTA updates  
✅ ESP32-C5 performance platform 2.4GHz and 5GHz bands 

Designed as a professional-grade residential and small commercial energy monitoring solution.

### Top Level

* ESP32-C5
* ATM90E32AS x 2 Independent. Each ATM90E32AS has its own Xtal.
* Six x CT Clamp Inputs / Ragowski Coil
* 1, 2 and 3 Phases, Delta 3P3W, Y or Δ
* Terminal Blocks
* AC/DC Powered (Like original IPEM)
* RS485 Interface (MODBUS, DMX, DMX512 etc.)
* OPTO Output (Galvanically Isolated)
* ADC Inputs (16bit,)
* GPIO Input/Output

### ESPHome

Full integration has been provided for [IPEM SIX within Home Assistant](https://github.com/DitroniX/Home-Assistant-Dev/tree/main/YAML%20Examples/IPEM%20SIX).

### Current Monitoring and Interfaces
A range of the mains current sensors (CT Clamps) maybe connected. This allows for **IPEM SIX** to be used for both lower current Home systems and Industrial or commercial installations.

 - The accurate **[Atmel ATM90E32](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/Atmel-46003-SE-M90E32AS-Datasheet.pdf)** is used for Enhanced Poly-Phase High-Performance Wide-Span Energy Metering, with fast SPI data communications to an Espressif **ESP32-C5 MCU**.
 - The board can **safely monitor a range of mains AC circuits**, from Single phase, Split or Dual phase (such as USA), and  Three phase 3P3W Delta. Full 50 Hz and 60 Hz.
 - An onboard accurate **16bit ADC** allows for monitoring of DC voltages up to 80V.
   
 - The **RS485** port allows interfacing to other local or remote sensors and monitors.
  
 - A **galvanically isolated OPTO output** can be used to safely connect or drive a range of external systems or devices.
   
 - Two **expansion ports**, SPI and I2C, facilitate an optional display panel, including MicroSD card.
 
 -  **MicroSD card**, for buffering or logging data.  This is mounted in the display panel.
   
 - The IPEM SIX has been designed to be compact, with an option to fit into a **DIN enclosure**, for cabinet or rack installations.

 ### Safety First
As with all our boards, safety is paramount, with AC sensing being from lower voltage inputs, through galvanically isolated mains transformers. Examples are bell transformers. This allows the IPEM SIX to fully safely function at voltages below 20V.  

## AC Monitoring
All AC Mains is safely and galvanically isolated using a low voltage transformer.  Examples are bell transformers.

### Supports AC Monitoring Around The [World](https://en.wikipedia.org/wiki/Mains_electricity_by_country)

-   **Europe and UK** which typically is 230 V @ 50 Hz
    -   With ranges around 216 V to 253 V
    
-   **USA and Canada** which typically is 120 V or 230 V @ 60 Hz
    -   With ranges around 114 V to 126 V

-   **Japan** which typically is 100 V @ 50 Hz or 60 Hz
    -   Eastern Japan is 50 Hz, and Western Japan is 60 Hz
-   **World** typically is 220V-240 V @ 50 Hz

### Where can IPEM SIX be used?

The IPEM SIX board can be used in a number of projects and installations such as:

-   Home
-   Education
-   Offices
-   Commercial
-   Factories
-   Farms
-   EV Charging
-   Smart Metering
-   Greenhouses 
-   Factories 
-   Industry  
-   Solar Farms 
-   Wind Farms 
-   Off Grid Systems


## Updates

-   26-07-29 - IPEM SIX now in stock.
-   26-07-09 - FLIX Lite for IPEM SIX uploaded.  This is a bring up application and is flashed to all boards prior to shipping.
-   26-06-20 - Added a complete IPEM SIX - [ESPHome Home Assistant Integration](https://github.com/DitroniX/Home-Assistant-Dev/tree/main/YAML%20Examples/IPEM%20SIX).
-   26-06-17 - IPEM SIX Proto boards sucessfuly completed testing. Now in production.
-   26-06-04 - IPEM SIX design in complete and Proto board in production. Still plan for availability around end of June.
-   26-05-30 - Update: The IPEM SIX is still planned for June, although has shifted back slighty due to other projects.
-   26-04-08 - Target Manufacture June 2026
-   26-04-08 - Project Information Review
-   26-03-21 - In Beta Development 
-   26-03-20 - Project Launched

## Preliminary Information and Spec to follow 

[Feature List Comparison](https://github.com/DitroniX/IPEM-Plus-ESP32-C5-LoRa-LoRaWAN-IoT-Mains-Power-Energy-Monitor/wiki/Compare-Mains-Power-IoT-Energy-Monitors)

### Availability

**IPEM SIX, along with the optional Display Board and DIN enclosure, will be available for purchase in June 2026.**

## **Further Information**

Additional information, and other technical details on this project, maybe found in the related repository pages.

**Repository Folders**

 - **Code** *(Code examples for Arduino  IDE, PlatformIO)*
 -  **Datasheets and Information** *(Component Datasheets, Schematics, Board Layouts, Photos, Technical Documentation)*
 - **Certification** *(Related Repository Project or Part, Certification Information)*

**Repository Tabs**

 - **Wiki** *(Related Repository Wiki pages and Technical User Information)*
 - **Discussions** *(Related Repository User Discussion Forum)*
 - **Issues** *(Related Repository Technical Issues and Fixes)*

***

We value our Customers, Users of our designs and STEM Communities, all over the World . Should you have any other questions, or feedback to share to others, please feel free to:

* Visit the related [Project](https://github.com/DitroniX?tab=repositories) *plus the related* **Discussions** and **Wiki** Pages.  See tab in each separate repository.
* **Project Community Information** can be found at https://www.hackster.io/DitroniX
* [DitroniX.net Website - Contact Us](https://ditronix.net/contact/)
* **Twitter**: [https://twitter.com/DitroniX](https://twitter.com/DitroniX)
* [Supporting the STEM Projects - BuyMeACoffee](https://www.buymeacoffee.com/DitroniX)
*  **LinkedIN**: [https://www.linkedin.com/in/g8puo/](https://www.linkedin.com/in/g8puo/)

***Dave Williams, Maidstone, UK.***

Electronics Engineer | Software Developer | R&D Support | RF Engineering | Product Certification and Testing | STEM Ambassador

## STEM

**Supporting [STEM Learning](https://www.stem.org.uk/)**



Tags: 	1-3 Phase, 2.4GHz, 3P3W, 5GHz, 90E32, Agriculture, ATM90E32, Board, Delta, Digital Temperature Sensor, EEPROM, Energy Monitor, ESP32-C5, Farming, Home, Home Assistant, Housing, Industry, IoT, IPEM, Mains Monitoring, MicroSD, Poly-Phase Metering, Remote Monitoring, RTC, SDK, Smart Home, Smart Industrial, Solar, Star, STEM, Thread, TMP102, UART, Wi-Fi 6, Zigbee, 2.4GHz, 5-20V DC Input, ADC, Agriculture, Bluetooth, DIN Enclosure, Display, Educational, EEPROM, ESP32-C5, IPEM SIX, Expansion Interface, Farming, Inputs, Galvanic Isolated Output, Home Assistant, I2C Interface, Industrial, IoT, JST 12W 1mm, JST 6W 1mm, JST SH, MicroSD, OLED, Opto Isolator, RadioLib, RGB WS2812, RS485, RS-485, DMX, DMX512, RTC, Solar Farm, SPI Interface, STEM, Tactile Button, Thread, Type C, User Panel, Wi-Fi, WS2811, WS2812, Zigbee, Thread
