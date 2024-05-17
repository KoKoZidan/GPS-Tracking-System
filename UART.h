/////////////%%%%%%%%%%%% Student Name :  Kawthar Mohamed %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Student ID   :  2001974         %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Team Number  :  17              %%%%%%%%%%%%/////////////
#include "stdint.h"
#ifndef UART_H_
#include "tm4c123gh6pm.h"
#include "bitManipulation.h" //startup_TM4C123.s


#define TXFULL 0x00000020  // fifo is full ?
#define RXEMPTY 0x00000010 // fifo is not empty?
#define clock 16000000

// UART0 for PC
void UART0_Init( unsigned long  baudrate ); // for PC
void UART0_CharTX( unsigned char ch);  
unsigned char UART0_CharRX();
void UART0_StringTX(char *str);
void UART0_StringRX(char *str, char stopCh);
void UART0SendFloat(float num) ;
void ftoa (double number, char* array);

// UART5 for GPS 
/////////////UART_INITIALIZATION(ENTER UART PIN NUMBER FROM 0 TO 7)////
void UART5_Init( unsigned long  baudrate );

/////////////UARTCHAR_TRANSMIT(ENTER UART PIN NUMBER FROM 0 TO 7)/////
void UART5_CharTX( unsigned char ch);

/////////////UARTCHAR_RECIEVE(ENTER UART PIN NUMBER FROM 0 TO 7)/////
unsigned char UART5_CharRX();

/////////////UARTSTRING_TRANSMIT(ENTER UART PIN NUMBER FROM 0 TO 7)/////
void UART5_StringTX(char *str);


/////////////UARTSTRING_RECEIVE(ENTER UART PIN NUMBER FROM 0 TO 7)/////
void UART5_StringRX(char *str, char stopCh);


/////////////////////UART2/////////////////
void UART2_Init( unsigned long  baudrate );


/////////////UARTCHAR_TRANSMIT(ENTER UART PIN NUMBER FROM 0 TO 7)/////
void UART2_CharTX( unsigned char ch);


/////////////UARTCHAR_RECIEVE(ENTER UART PIN NUMBER FROM 0 TO 7)/////
unsigned char UART2_CharRX();


/////////////UARTSTRING_TRANSMIT(ENTER UART PIN NUMBER FROM 0 TO 7)/////
void UART2_StringTX(char *str);


/////////////UARTSTRING_RECEIVE(ENTER UART PIN NUMBER FROM 0 TO 7)/////
void UART2_StringRX(char *str, char stopCh);



/////////////////////UART7///
void UART7_Init( unsigned long  baudrate );


/////////////UARTCHAR_TRANSMIT(ENTER UART PIN NUMBER FROM 0 TO 7)/////
void UART7_CharTX( unsigned char ch);


/////////////UARTCHAR_RECIEVE(ENTER UART PIN NUMBER FROM 0 TO 7)/////
unsigned char UART7_CharRX();


/////////////UARTSTRING_TRANSMIT(ENTER UART PIN NUMBER FROM 0 TO 7)/////
void UART7_StringTX(char *str);


/////////////UARTSTRING_RECEIVE(ENTER UART PIN NUMBER FROM 0 TO 7)/////
void UART7_StringRX(char *str, char stopCh);




#endif /* UART_H_ */
