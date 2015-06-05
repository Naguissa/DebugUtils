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

