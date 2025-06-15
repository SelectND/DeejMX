# DeejMX

DeejMX lets you control individual app volume levels using DMX512/RS485 signaling. It works like deej, you just have to alter the Arduino sketch.

## This documentation is very bare bones. Most things can be found in the official Deej  Documentation.

## Hardware
- ### Parts
    - In this projects I will be using an Arduino Pro Micro and an MAX485 board (for Serial to TTL implementation)

- ### Connection
    - Connect the DMX Cable to the MAX485
        - DMX Data+ to MAX485 A
        - DMX Data- to MAX485 B
        - DMX GND to GND

    - Connect the MAX485 to the Pro Micro MCU
        - MAX485 VCC to MCU VCC
        - MAX485 DE & RE to GND
        - MAX485 RO to MCU RX

## Software
The desktop client remains unaltered from the original deej project
- ### Arduino
    - Install DMXSerial library
    - Upload [sketch](/arduino/deejmx/deejmx.ino)


## License

DeejMX is released under the [MIT license](./LICENSE).
