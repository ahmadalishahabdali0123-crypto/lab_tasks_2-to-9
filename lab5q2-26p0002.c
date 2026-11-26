#include<stdio.h>
int main()
{
int laptopprice,currentsavings,monthlysaving,month=1,count, totalsavings;
printf(" enter the price of laptop,currentsavings, monthly saving\n");
scanf("%d%d%d",&laptopprice,&currentsavings,&monthlysaving);
 
while(currentsavings<=laptopprice)
{
    
printf("month%d savings are=%d\n",month,currentsavings+monthlysaving);
 month=month +1;
 currentsavings= currentsavings+monthlysaving;
}
printf("sara can buy laptop after%dmonths",month);
return 0;


}