#include<stdio.h>
int main()
{
int choice,qty,total_items=0,bill=0,discount;
do
{printf("---------CHECKOUT-------\n");
printf("Choice\tItem\tPrice(Rs)\n");
printf("1\t Tea\t   60\n");
printf("2\tSamosa  \t40\n");
printf("3\tSandwich\t180\n");
printf("4\tCheckout\t-\n");


printf("enter choice:");
scanf("%d",&choice);

if(choice==1)
{ 

printf("enter quantity:");
scanf("%d",&qty);
bill+=qty*60;
total_items+=qty;
printf("current bill:Rs%d\n",bill);
}

else if(choice==2)
{ 

printf("enter quantity:");
scanf("%d",&qty);
bill+=qty*40;
total_items+=qty;
printf("current bill:Rs%d\n",bill);
}

else if(choice==3)
{

printf("enter quantity:");
scanf("%d",&qty);
bill+=qty*180;
total_items+=qty;
printf("current bill:Rs%d\n",bill);
}
else if(choice==4)
{
break;
}
else 
  printf("Invalid choice .Try again\n");
}

while( choice!=4);
if(bill>1000)
discount=bill*10/100;

printf("Total items=%d\n",total_items);
printf("Bill=Rs%d\n",bill);
printf("Discount=Rs%d\n",discount);
printf("Payable amount:Rs%d",bill-discount);
 return 0;
}





