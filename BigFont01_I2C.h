#ifndef BigFont01_I2C_h
#define BigFont01_I2C_h

#include "Arduino.h"
#include "LiquidCrystal_I2C.h"

class BigFont01 {
	public:
		BigFont01(LiquidCrystal_I2C*);
		void begin();
		int write(int, int, char);
	private:
		LiquidCrystal_I2C* _lcd;
};

#endif