#include<stdio.h>
int main()
{
    int locker[10];
    int i,j,x,found=0,empty;
    printf("Enter item code in each locker(empty=0)\n");
    for(i=0;i<10;i++)
    {
    printf("Locker %d:",i+1);
        scanf("%d",&locker[i]);
        printf("\n");
        }
    printf("Enter item code to search: ");
    scanf("%d",&x);
    
    for(j=0;j<10;j++)
        {
            if(locker[j]==x)
            { printf("Item %d found in locker %d\n",x,j+1);
            found+=1;   
            }
             if(locker[j]==0)
                empty+=1;
        }
 if(found==0)  
     printf("Item %d is not in any locker.\n",x);
    else 
     printf("Total lockers with this item: %d\n",found);
    printf("Empty lockers:%d",empty);
return 0;
}