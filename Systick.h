/////////////%%%%%%%%%%%% Student Name :  Rahma  Essam   %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Student ID   :  2101625        %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Team Number  :  17             %%%%%%%%%%%%/////////////
#ifndef SYSTICK_H_
#define SYSTICK_H_
#include "stdint.h"
#include "tm4c123gh6pm.h"
#include "bitManipulation.h"


#define MAX 0x00FFFFFF      /* MAX value of the Reload Register */
#define MAXSEC 16000000
#define MAX_M_SEC 16000


void delay_s(void);
void wait_s(uint32_t num);
void delay_ms(void);
void wait_ms(uint32_t num);
#endif                        /* SYSTICK_H_ */
