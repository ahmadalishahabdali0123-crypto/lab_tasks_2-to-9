#include<stdio.h>
int main()
{
int i,j,k,days,Id,guard[7]={0};
    printf("Enter guard Ids for day 1 to day 7:\n ");
    
    for(i=0;i<7;i++)
        {
   printf("\nDay %d:",i+1);
    scanf("%d",&guard[i]);
        } 
printf("Shift roster forward by how many days(1-6)?");
    scanf("%d",&days);
    int newroster[7]={0};
 printf("Day\t  Old\t New\n");
         for(j=0;j<7;j++)
        {
         newroster[(j+days)%7]= guard[j];
        }
    for(i=0;i<7;i++)
        {
            printf("Day%d\t%d \t%d\n",i+1,guard[i],newroster[i]);  
        }
 printf("Enter your guard Id:");
            scanf("%d",&Id);
            
    for (k=0;k<7;k++)
        {
       if (newroster[k]==Id)
    printf("\nGuard %d has now duty on Day %d.",Id,k+1);
        } 

return 0;
}