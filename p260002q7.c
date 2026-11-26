
#include<stdio.h>
int main()
{
int sub1;
int sub2;
int sub3;

printf("enter the sub1 marks");
scanf("%d",&sub1);
printf("enter the sub2 marks\n");
scanf("%d",&sub2);

printf("enter the sub3 marks\n");
scanf("%d",&sub3);
int total=sub1+sub2+sub3;
float average=(float)total/3;

    
printf("the total no of marks are%d\n and average is %.2f\n",total,average);
 return 0;
}
