#include<stdio.h>
int read_units(void);
float calculateBill(int units);
int main()
{
int units;
float totalbill;
 units=read_units();
totalbill=calculateBill(units);
printf("Units consumed:%d\n",units);
printf("Totalbill :%.2f",totalbill);

return 0;
}
int read_units()
{
int a;
printf("Enter the units consumed:");
scanf("%d",&a);
while(a<0)
  {
printf("Units cannot be negative");
printf("Enter the units consumed:");
scanf("%d",&a);
   }

return (a);
}
 float calculateBill(int units)
{ 
float bill=0; 
if(units<=100)
bill=units*100;
else if(units<=300)
bill=100*10 +(units-100)*15;
else
bill=(100*10) +(200*15)+((units-300)*20);

if(bill>3000)
bill=bill +(bill*0.05);
return bill;
}

