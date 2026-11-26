
#include<stdio.h>
int main()
{
int runs[6]={0};
int i,k=0,best=0,high=0;
float run_rate;
for(i=0;i<6;i++)
{
printf("Runs in %d over:",i+1);
scanf("%d",&runs[i]);
k+=runs[i];
if(runs[i]>high)
{high=runs[i];
best=i+1;}
}
printf("\nTotal runs:%d",k);
run_rate=(float)k/6;
printf("\nRun rate:%.2f per over",run_rate);
printf("\nBest over: over %d with %d runs",best,high);
if (k<60)
printf("\nNeeded %d more runs to reach 60",60-k);
else
    printf("\nTarget achieved");
    return 0;
}
