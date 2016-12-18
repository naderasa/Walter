
/*
 * utilities.h
 *
 * Created: 10.05.2016 12:01:54
 *  Author: JochenAlt
 */ 

extern int doI2CPortScan(Stream* logger);
extern bool scanI2CAddress(uint8_t address, byte &error);

#define MAX_INT_16 ((2<<15)-1)
#define sgn(a) ( ( (a) < 0 )  ?  -1   : ( (a) > 0 ) )

extern HardwareSerial* logger;
extern HardwareSerial* cmdSerial;

extern void logFatal(const __FlashStringHelper *ifsh);
extern void logError(const __FlashStringHelper *ifsh);
extern void logPin(uint8_t PINnumber);



