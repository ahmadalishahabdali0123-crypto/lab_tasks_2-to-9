#include<stdio.h>
int main()
{ 
   
          
      for (int i=1,cou=0;cou<4;i++)
        {
            int factors =0;
        for (int j=1;j<i;j++)
            {
              if (i%j==0)
                factors=factors+j;
            
            }
            if(factors==i)
            { printf("%d is  perfect number\n",i);
               cou++;
            }
        }
      
return 0;
   
} 
