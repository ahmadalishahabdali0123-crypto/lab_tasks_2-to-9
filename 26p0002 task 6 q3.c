#include<stdio.h>
int main()
{
    int x,n,k=0,exponent=1;
     float sum=0,factorial=1;
printf("Enter the value of n: ");
   scanf("%d",&n);
    printf("\nEnter the value of x:  ");
    scanf("%d",&x);
    for(k=0;k<=n;k++)
        {
            exponent=1;
            factorial=1;
            
        for(int j=1;j<=k;j++)
            {
                exponent=exponent*x;
            }
            for(int a=1;a<=k;a++)
                {
                    factorial=factorial*a;
                
                }
sum= sum + (exponent/factorial);
    }
    printf("the sum =%f",sum);
    return 0;
}































    
        
        




    
