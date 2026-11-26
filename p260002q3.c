
#include<stdio.h>
int main()
{
float tax_rate;
float salary;
printf("enter the salary amount\n");
scanf("%f",&salary);
printf("enter the tax rate\n");
scanf("%f",&tax_rate);
float taxpayable=tax_rate*salary/100;
int net_salary= salary-taxpayable;
 printf("the tax amount to be payed is :%f\n",taxpayable);
printf("the net salary is:%d\n", net_salary);
 return 0;
}
