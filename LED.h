
/////////////%%%%%%%%%%%% Student Name :  Sama Tarik      %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Student ID   :  2101631         %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Team Number  :  17              %%%%%%%%%%%%/////////////
#include <stdint.h>
#ifndef LED_H_
#include "tm4c123gh6pm.h"
#include "bitManipulation.h"
#include "GPIO.h"

#define RED 0X02
#define BLUE 0X04
#define GREEN 0X08
#define YELLOW 0x0A
void LED_init();
void LED_ON(char rgb);
void LED_OFF(char rgb);
#endif
