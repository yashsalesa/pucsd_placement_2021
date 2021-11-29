#include<stdio.h>
#include<stdlib.h>

float CalculateAngle(float hours, float minutes)
{
   
    if (hours == 12 || hours>12)
    	 hours = hours-12;
    if (minutes == 60)
     {
      	minutes = 0;
      	hours =hours+ 1;
       if(hours>12)
        hours = hours-12;
     }
     int hourAngle = (hours*60 + minutes)/2;
	 int minuteAngle = 6*minutes;
	
    int angle = abs(hourAngle - minuteAngle);
    if(angle>360-angle)
    		return 360-angle;
    		else
    		return angle;
  return angle;
}
     
int main(int argc,char *argv)
{
	float hours=atof(argv[1]);
	float minutes=atof(argv[2]);
	float Result=CalculateAngle(hours,minutes);
	printf("%f",Result);
}
