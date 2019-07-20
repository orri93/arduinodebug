#ifndef _FDS_ARDUINO_LIBRARY_DEBUG_OLED_H_
#define _FDS_ARDUINO_LIBRARY_DEBUG_OLED_H_

#ifdef _ARDUINO_OLED_DEBUG_
#define ARDUINO_OLED_DEBUG_DECLARE void _arduino_oled_debug_setup_() { \
  }
#define ARDUINO_OLED_DEBUG_SETUP( x ) _arduino_oled_debug_setup_( (( b )) )
#define ALD(x) 
#else
#define ARDUINO_OLED_DEBUG_DECLARE
#define ARDUINO_OLED_DEBUG_SETUP(...)
#define ALD(...)
#endif

#endif /* _FDS_ARDUINO_LIBRARY_DEBUG_SERIAL_H_ */
