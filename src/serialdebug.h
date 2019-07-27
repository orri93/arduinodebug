#ifndef _FDS_ARDUINO_LIBRARY_DEBUG_SERIAL_H_
#define _FDS_ARDUINO_LIBRARY_DEBUG_SERIAL_H_

#if defined(_ARDUINO_SERIAL_DEBUG_) || defined(_ARDUINO_SERIAL_DEBUG_BAUD_)
#ifndef _ARDUINO_SERIAL_DEBUG_BAUD_
#define _ARDUINO_SERIAL_DEBUG_BAUD_ 115200
#endif
#ifndef _ARDUINO_SERIAL_DEBUG_
#define _ARDUINO_SERIAL_DEBUG_
#endif
#define ARDUINO_SERIAL_DEBUG_SETUP(...) if(!Serial) { Serial.begin(_ARDUINO_SERIAL_DEBUG_BAUD_); } while(!Serial) {;}
#define ARDUINO_SERIAL_DEBUG_SETUP_BAUD(...) if(!Serial) { Serial.begin(__VA_ARGS__); } while(!Serial) {;}
#define ASD(...) Serial.print( __VA_ARGS__ )
#define ASDLN(...) Serial.println(__VA_ARGS__)
#else
#define ARDUINO_SERIAL_DEBUG_SETUP(...)
#define ARDUINO_SERIAL_DEBUG_SETUP_BAUD(...)
#define ASD(...)
#define ASDLN(...)
#endif

#endif /* _FDS_ARDUINO_LIBRARY_DEBUG_SERIAL_H_ */
