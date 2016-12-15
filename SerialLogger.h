#ifndef __SERIAL_LOGGER__HEADER__
#define __SERIAL_LOGGER__HEADER__
#define BAUD_RATE 57600
#define SENDSERIAL 1

#include "Arduino.h"

class SerialLogger {

    bool enabled;
    static SerialLogger* instance;
    SerialLogger();

  public:
    static SerialLogger* getInstance();
    void logDataToConsole(char* dataString);
    void enableLogger();
    void disableLogger();
    ~SerialLogger();
};

#endif // __SERIAL_LOGGER__HEADER
