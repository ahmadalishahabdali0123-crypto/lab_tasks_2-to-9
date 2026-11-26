#include<stdio.h>
int main()
{
int pin,cr_pin=4321,count=1,attempts=3;
    
        for(count;count<=3;count+=1)
            { printf("enter the  pin=");
    scanf("%d",&pin);

if(cr_pin==pin)
{ 
    printf("Access granted\n");
    return 0;
    
        }
    else 
{
    if(count<attempts)
     printf("wrong pin;%d attempt(s) left\n",attempts-count);

else
     printf("Card blocked.Please contact your bank");
}
    }   
    return 0;

    
}