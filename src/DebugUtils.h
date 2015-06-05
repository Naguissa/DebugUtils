#ifndef DEBUGUTILS
	#define DEBUGUTILS
	#ifdef DEBUG
		#include <Arduino.h>
		#ifndef DEBUGUTILS_DEV
			#ifdef DEBUGUTILS_SOFWARESERIAL
				#ifndef DEBUGUTILS_RX
					#define DEBUGUTILS_RX 10
				#endif
				#ifndef DEBUGUTILS_TX
					#define DEBUGUTILS_TX 11
				#endif
				#ifndef SoftwareSerial_h
					#error "You need to include SoftwareSerial in your project in order to use it: #include <SoftwareSerial.h>"
				#endif
				#include <SoftwareSerial.h>
				SoftwareSerial DebubUtilsSoftwareSerial(DEBUGUTILS_RX, DEBUGUTILS_TX); // RX, TX
				#define DEBUGUTILS_DEV DebubUtilsSoftwareSerial
			#else
				#define DEBUGUTILS_DEV Serial
			#endif
		#endif
		#ifndef DEBUGUTILS_BAUDS
			#define DEBUGUTILS_BAUDS 9600
		#endif
		void DebugUtilsInitFunction() {
			DEBUGUTILS_DEV.begin(DEBUGUTILS_BAUDS);
		}
		#define DebugUtilsInit() DebugUtilsInitFunction()
		#define DEBUG_PRINT(A) DEBUGUTILS_DEV.print(A)
		#define DEBUG_PRINTLN(A) DEBUGUTILS_DEV.println(A)
		#define DEBUG_PRINT2(A, B) DEBUGUTILS_DEV.print(A, B)
		#define DEBUG_PRINTLN2(A, B) DEBUGUTILS_DEV.println(A, B)
	#else
		#define DebugUtilsInit()
		#define DEBUG_PRINT(A)
		#define DEBUG_PRINTLN(A)
		#define DEBUG_PRINT2(A, B)
		#define DEBUG_PRINTLN2(A, B)
	#endif
#endif


