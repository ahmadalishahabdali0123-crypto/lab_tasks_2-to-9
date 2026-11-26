#include<stdio.h>
int main()
{
    int nos,mos,totalmarks=0,passed=0,failed,highest=0,count;
    float average;
    printf("enter the number of students=");
    scanf("%d",&nos);
    for(count=1;count<=nos;count++)
        {
     printf("enter the marks of %d;",count);
     scanf("%d",&mos);

    totalmarks=totalmarks+mos;
            if(mos>highest)
                highest=mos;
     if(mos>=50)
        passed+=1;
    else 
       failed+=1;  
        }
average=(float)totalmarks/nos;
printf("\nPassed=%d",passed);
printf("\nFailed=%d",failed);
printf("\nAverage=%.2f",average);
printf("\nHighest=%d",highest);
return 0;
}