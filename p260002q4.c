
#include<stdio.h>
int main()
{
int n=368;
int remaining;
    remaining=n;
int quarter=remaining/25;
 remaining=remaining%25;   
int dime=remaining/10;
   remaining=remaining%10;
int nickel=remaining/5;
    remaining=remaining%5;
    
int pennies=remaining%10;
    
printf("number of quarter:%d\n number of dime:%d\n number of nickel:%d\n number of pennies remaining:%d\n",quarter,dime,nickel,pennies);
return 0;
    getchar();
}