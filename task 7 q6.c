#include<stdio.h>
void showmenu(void);
int readNonNegative(void);
void printLine(int length);
long power(int base,int exponent);
long factorial(int n);
int gcd(int a,int b);
int lcm(int a,int b);

int main()
{
int length,base,exponent,a,b,choice;
do{
showmenu();
printf("Enter your choice:");
scanf("%d",&choice);
if (choice ==1)
{printf("Enter base:");
base= readNonNegative();
printf("enter exponent: ");
exponent=readNonNegative();
printf("Result;%ld\n",power(base,exponent));

}
//GCD
else if(choice==2)
{printf("Enter first number:");
a=readNonNegative();
printf("Enter second number:");
b=readNonNegative();

printf("GCD:%d\n",gcd(a,b));
}
//LCM
else if(choice==3)
{
printf("Enter first number: ");
a=readNonNegative();
printf("Enter second number:");
b=readNonNegative();
printf("LCM:%d\n",lcm(a,b));
}
//print line
else if(choice==4)
{
printf("enter length:");
length=readNonNegative();
printLine(length);
}
else if(choice==5)
{
printf("Exiting...\n");
}
else 
{
printf("invalidchoice.\n");
}

}
while(choice!=5);
return 0;
}
//no arguments,no return value
void showmenu(void)
{
printf("\n-----Mini Math Toolkit------\n");
printf("1.Power");
printf("\n2.GCD");
printf("\n3.LCM");
printf("\n4.Printline");
printf("\n5.Exit");
}
//no arguments ,no return value
int readNonNegative()
{
int i;
scanf("%d",&i);
while(i<0)
{printf("negative numbers not allowed. enter again:");
scanf("%d",&i);

}
return i;

}

void printLine(int length)
{for (int i=0;i<length;i++)
{
printf("-");
}
printf("\n");

}
long power(int base,int exponent)
{
long result=1;
int i;
for(i=0;i<exponent;i++)
{
result=result*base;
}
return result;

}
int gcd(int a,int b)
{
int temp;
while(b!=0)
{
temp=b;
b=a%b;
a=temp;
}

return a;
}
int lcm(int a,int b)
{
return(a*a)/gcd(a,b);
}