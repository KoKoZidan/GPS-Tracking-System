#include "APP.h"
#include <math.h>
#include <stdlib.h>
void SystemInit(){}
//#include "driverlib/sysctl.h"
int main(){
char k;
char lat[20] = {0};
char log[20] = {0};	
double latitude_2=30.064069;
double logitude_2=31.279220;
double displacement=0;
double latDM;
double lonDMM;
double latDD;
double lonDD;
double latDM1;
double lonDMM1;
double latDD1;
double lonDD1;
//this function is called to set the clock of the tiva to 16MHZ
//SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_INT | SYSCTL_MAIN_OSC_DIS);
UART0_Init(  9600 );	
UART5_Init(  9600 ); 
UART7_Init(  9600 ); 
LED_init();
Button_InitPullUp('f',0);
readGPS(lat,log);
	wait_ms(1000);
latDM1 =ConvertToDouble(lat);
lonDMM1 =ConvertToDouble(log);
latDD1 =convertDMMtoDD(latDM);
lonDD1 = convertDMMtoDD(lonDMM);

while(1){ 
	
readGPS(lat,log);
	
	wait_ms(3000);



//	UART0_StringTX("\r\n");
UART0_StringTX("\nout of read gps\n");
		 //wait_ms(3000);

//	UART0_StringTX(lat);

//	delay_s();

//	UART0_CharTX(',');

//	UART0_StringTX("LOG:");

//	UART0_StringTX(log);
latDM =contodoub(lat);
lonDMM =contodoub(log);
latDD = convertDMtoDD(latDM);
lonDD = convertDMMtoDD(lonDMM);
displacement += calculateDistance(latDD1, lonDD1,latitude_2,logitude_2); 
latDD1=latDD;
lonDD1=lonDD;
		 wait_ms(3000);

UART0_StringTX("\r\n");
UART0_StringTX("dis : ");
		 wait_ms(3000);

char array[10];
		 wait_ms(3000);
ftoa (displacement, array)	;	
UART0_StringTX(array);
	wait_ms(3000);

if(displacement>100)
{
	LED_ON('r');
			 wait_ms(3000);

	UART0_StringTX("3AASHH, Reached 100 meter");
			 wait_ms(3000);

}
 if(Button_Read('f',0)==1)
{
	LED_ON('y');
			 wait_ms(3000);

	UART0_StringTX("\nButton is pressed\n");
			 wait_ms(3000);

}
 if(lonDMM ==logitude_2 &&latDM==latitude_2)
{
		LED_ON('g');	
		 wait_ms(3000);
	
	UART0_StringTX("7amdellah 3ala elsalama<3");
			 wait_ms(3000);


}	
}
}