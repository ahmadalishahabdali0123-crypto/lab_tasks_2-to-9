#include<stdio.h>
int main()
{
 int i,j,k,flag=-1;
   float highest,lowest,sum=0,final;
float juscores[7]={0};
    for(i=0;i<7;i++)
    {
      printf("Judge %d score:",i+1);
       scanf("%f",&juscores[i]);
    
        }  
     highest=juscores[0];
     lowest=juscores[0];
    for(k=0;k<7;k++)
        {
            sum+=juscores[k];
      if(juscores[k]>highest)  
          highest=juscores[k];
        if(lowest>juscores[k])
            lowest=juscores[k];
        }
    
    printf("Highest score dropped:%.2f\n",highest);
       printf("Low score dropped:%.2f\n",lowest);
    final=(sum-highest-lowest)/5;
    printf("Final score:%.2f",final);
    for(j=0;j<7;j++)
        {  
            
                if(juscores[j]==10)
                {    flag=j+1;
            break;
            }
        }
    if(flag!=-1)
        printf("\nJudge %d gave a perfect 10",flag);
    else 
         printf("\nno judge did");


 return 0;   
}