
#include<stdio.h>

int main() 
{
    
  int time;
int  distance;
printf("enter the number of hours ="); 
scanf("%d",&time);
printf("enter the  distance travelled=");
scanf("%d",&distance);
    float avgspeed=(float)distance/time;
printf(" the average speed is =%f km/hour",avgspeed);

    return 0;
}
