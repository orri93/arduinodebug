#ifndef _FDS_ARDUINO_LIBRARY_DEBUG_SOFTWARE_SERIAL_H_
#define _FDS_ARDUINO_LIBRARY_DEBUG_SOFTWARE_SERIAL_H_

#ifdef _ARDUINO_SOFTWARE_SERIAL_DEBUG_
#define ARDUINO_SOFTWARE_SERIAL_DEBUG_DECLARE void _arduino_software_serial_debug_setup_(const int& baud) { \
  if(!Serial) { Serial.begin(baud); } while(!Serial) {;} }
#define ARDUINO_SOFTWARE_SERIAL_DEBUG_SETUP( b ) _arduino_serial_debug_setup_( (( b )) )
#define ASSD(x) Serial.print( (( x )) )
#define ASSDLN(x) Serial.println( (( x )) )
#else
#define ARDUINO_SOFTWARE_SERIAL_DEBUG_DECLARE
#define ARDUINO_SOFTWARE_SERIAL_DEBUG_SETUP(...)
#define ASSD(...)
#define ASSDLN(...)
#endif

#endif /* _FDS_ARDUINO_LIBRARY_DEBUG_SOFTWARE_SERIAL_H_ */
