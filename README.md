# Deneyap Rain Sensor Arduino Library
[FOR TURKISH VERSION](docs/README_tr.md) ![trflag](https://github.com/deneyapkart/deneyapkart-arduino-core/blob/master/docs/tr.png)

***** Add photo ****

Arduino library for Deneyap Rain Sensor

## :mag_right:Specifications 
- `Product ID` **M32**, **mpv1.0**
- `MCU` STM8S003F3
- `Weight` 
- `Module Dimension`
- `I2C address` 0x2E, 0x49, 0x33, 0x34

| Address |  | 
| :---    | :---     |
| 0x2E | default address |
| 0x49 | address when ADR1 pad is shorted |
| 0x33 | address when ADR2 pad is shorted |
| 0x34 | address when ADR1 and ADR2 pads are shorted |

## :closed_book:Documentation 
Deneyap Rain Sensor

[How to install a Arduino Library](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Rain Sensor
This Arduino library allows you to use Deneyap Rain sensor with I2C peripheral. You can use this library in your projects with any Arduino compatible board with I2C peripheral.

## :globe_with_meridians:Repository Contents
- `/docs ` README_tr.md and product photos
- `/examples ` Examples with .ino extension sketches
- `/src ` Source files (.cpp .h)
- `keywords.txt ` Keywords from this library that will be highlighted in the Arduino IDE
- `library.properties ` General library properties for the Arduino package manager

## Version History
1.0.0 - initial release

1.0.1 - update library.properties file

## :rocket:Hardware Connections
- Deneyap Rain Sensor and Board can be connected with I2C cable
- or 3V3, GND, SDA and SCL pins can be connected with jumper cables

| Rain sensor| Function		 | Board pins |
| :---       | :---     	 |   :---     |
| 3.3V       | Power  		 | 3.3V       |
| GND        | Ground 		 | GND        |
| SDA        | I2C Data 	 | SDA pin |
| SCL        | I2C Clock	 | SCL pin |
| SWIM		 |Debug			 | no connection |
| RES 		 |Debug			 | no connection |
| AO 		 |Analog Output  | any Analog pin|
| DO 		 |Digital Output | any GPIO pin |

## :bookmark_tabs:License Information
Please review the [LICENSE](https://github.com/deneyapkart/deneyap-yagmur-algilayici-arduino-library/blob/master/LICENSE) file for license information.