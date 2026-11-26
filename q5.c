#include<stdio.h>
int main()
{
    int i,j,genuine=7,forged=0;
int ticket[7]={0};
    for(i=0;i<7;i++)
    {
        printf("Ticket of person %d: ",i+1);
        scanf("%d",&ticket[i]);        
        }  
    printf("\n------------GATE REPORT------------");
    for(i=0;i<7;i++)
    {  for(j=0;j<=i-1;j++)
    {
     if(ticket[i]==ticket[j])
    {
        printf("\nForged: person %d used ticket %d,already used by person %d ",i+1,ticket[i],j+1);
        forged+=1;
        genuine=genuine-1;
        break;
    }     
    }
    }  
    printf("\nGenuine: %d, Forged: %d",genuine,forged);
return 0;    
}