#ifndef BigFont01_I2C_h
#define BigFont01_I2C_h

#include "Arduino.h"
#include "LiquidCrystal_PCF8574.h"

class BigFont01_I2C {
	public:
		BigFont01_I2C(LiquidCrystal_PCF8574*);
		void begin();
		int  writechar(int, int, char);                // col, row, single ascii character
		void clear(int, int);                          // col, row
		void writeint (int, int, int, uint8_t, bool);  // col, row, number to display, digits, leading 
	private:
		LiquidCrystal_PCF8574* _lcd;
};

#endif