#include<stdio.h>
int main()
{
int i,j,x,y,temp,high=0,low=0;
int roll[6]={0},marks[6]={0};
    for(i=0;i<6;i++)
    {
printf("\nStudent %d - roll no and marks:",i+1);
scanf("%d %d",&roll[i],&marks[i] );
    }
printf("Rank\tRoll\tMarks\n");
  for(i=0;i<5;i++)
    for(j=i+1;j<6;j++)
    {
        if(marks[i]<marks[j])
        {
    temp=marks[i];
     marks[i]=marks[j];
    marks[j]=temp;
        x=roll[i];
        roll[i]=roll[j];
        roll[j]=x;
        }
     }
    for(i=0;i<6;i++)
    {
        printf("\n%d\t%d\t%d\t",i+1,roll[i],marks[i]);
    }
    printf("\nPosition Holders:\n");
    printf("\n1st: Roll  %d (%d marks)",roll[0],marks[0]);
    printf("\n2nd: Roll  %d (%d marks)",roll[1],marks[1]);
    printf("\n3rd: Roll  %d (%d marks)",roll[2],marks[2]);

 return 0;   
}