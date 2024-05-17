/////////////%%%%%%%%%%%% Student Name :  Mai Mostafa     %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Student ID   :  2101474         %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Team Number  :  17              %%%%%%%%%%%%/////////////
#include "APP.h"
#include <math.h>
#include <stdlib.h>
void SystemInit(){}

int main(){
char k;
char lat[20] = {0};
char log[20] = {0};	
double latitude_2=30.064069; //final distenation
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

UART0_Init(  9600 );	
UART5_Init(  9600 ); 
LED_init();
Button_InitPullUp('f',0);
readGPS(lat,log);
	wait_ms(1000);
latDM1 =ConvertToDouble(lat);//start point
lonDMM1 =ConvertToDouble(log);
latDD1 =convertDMtoDD(latDM);
lonDD1 = convertDMtoDD(lonDMM);

while(1){ 
	
readGPS(lat,log);
	
	wait_ms(3000);




UART0_StringTX("\nout of read gps\n");

latDM =ConvertToDouble(lat);
lonDMM =ConvertToDouble(log);
latDD = convertDMtoDD(latDM);//convert double to degree
lonDD = convertDMtoDD(lonDMM);
displacement += calculateDistance(latDD1, lonDD1,latDD,lonDD); 
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
 if(Button_Read('f',0)==0)
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
