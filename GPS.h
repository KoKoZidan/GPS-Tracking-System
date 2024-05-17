/////////////%%%%%%%%%%%% Student Name :  Yassmine Saeed  %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Student ID   :  2101135         %%%%%%%%%%%%/////////////
/////////////%%%%%%%%%%%% Team Number  :  17              %%%%%%%%%%%%/////////////
#ifndef GPS_H_INCLUDED
#define GPS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "UART.h"
#include "Systick.h"
#include <math.h>

void readGPS(char * lat, char * log);   ///if it returns 0 then its working and 1 means didnt find gprmc and -1 means invalid data

double calculateDistance(double lat1, double lon1, double lat2, double lon2);


double toRadians(double degrees);

double ConvertToDouble(char* str);

double convertDMtoDD(double coordinate);






#endif // GPS_H_INCLUDED
