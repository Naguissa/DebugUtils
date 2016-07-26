# Arduino and STM32 DebugUtils library

## What is this repository for? ##

Simple convenient header file to centralize simple serial debug with easy activation/deactivation and some custmization



## How do I get set up? ##

 * Get the ZIP.
 * Install library on Arduino

## Options (#defines) ##

All must be defined before the include.

 - DEBUG - Define it to activate debug; if not defined all debug code is removed
 - DEBUGUTILS_DEV - Define it to use a custom device.
 - DEBUGUTILS_SOFWARESERIAL - If DEBUGUTILS_DEV is not defined it tells debug library to use SoftwareSerial device. You must include <SoftwareSerial.h> in main program BEFORE including this library.
 - DEBUGUTILS_RX - When usking SoftwareSerial, it mermits you to specify RX pin (default: 10)
 - DEBUGUTILS_TX - When usking SoftwareSerial, it mermits you to specify TX pin (default: 11)
 - DEBUGUTILS_BAUDS - Set baud rate of device (default: 9600, very slow)


## Methods ##


DebugUtilsInit() - Must be called on Setup, initialize device with baud rate

DEBUG_PRINT(A) - Equivalent to DEBUG_DEV.print(A)

DEBUG_PRINTLN(A) - Equivalent to DEBUG_DEV.println(A)

DEBUG_PRINT2(A, B) - Equivalent to DEBUG_DEV.print(A, B)

DEBUG_PRINTLN2(A, B) - Equivalent to DEBUG_DEV.println(A, B)




## Usage ##

```
#include <Arduino.h>

// DebugUtils defines:
#define DEBUGUTILS_BAUDS 57600

// Activate debug:
#define DEBUG

#include <DebugUtils.h>



void setup() {
	DebugUtilsInit();
	DEBUG_PRINT("Debug in same line");
	DEBUG_PRINTLN(" -- Debug with new line");
	DEBUG_PRINT2(10, DEC); // Same line
	DEBUG_PRINTLN2(99, DEC); // New line
}

void loop() {
}
```


## Example ##

Included on example folder, available on Arduino IDE.



## Who do I talk to? ##

 * [Naguissa](https://github.com/Naguissa)
 * http://www.naguissa.com
 * http://www.foroelectro.net
