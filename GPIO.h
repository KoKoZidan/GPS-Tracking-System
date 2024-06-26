/////////////%%%%%%%%%%%% Student Name :  Farida Abdallah %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Student ID   :  2101530         %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Team Number  :  17              %%%%%%%%%%%%/////////////
#ifndef GPIO_H_
#define GPIO_H_

#include "bitManipulation.h"
#include "tm4c123gh6pm.h"
#include "stdint.h"

void GPIO_InitPort(uint8_t port);
void GPIO_SetPinValue(uint8_t port, uint8_t pin, uint8_t value );
void GPIO_SetPinDirection(uint8_t port, uint8_t pin, uint8_t direction );
void GPIO_SetPortValue(uint8_t port, uint8_t value);
uint8_t GPIO_GetPinValue(uint8_t port, uint8_t pin);
uint8_t Button_Read(uint8_t portname, uint8_t pinnumber);
void Button_InitPullUp(uint8_t portname,uint8_t pinnumber);
#endif
