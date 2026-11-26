#include<stdio.h>
void welcome(void);
void printSquare(int side,char ch);
int main()
{ 
int side;
char ch;
welcome();
printf("Enter  side:");
scanf("%d\n",&side);
printf("Enter character:");
scanf("%c\n",&ch);
printSquare( side, ch);

welcome();

return 0;
}
// 1:no arguments ,no return value
void welcome(void)
{ printf("=================================\n");
printf("\t Pattern Printer v1.0\n");
printf("====================================\n");
}
//arguments ,no return value
void printSquare(int side,char ch)
{
  for(int i=1;i<=side;i++)
   { for(int j=1;j<=side;j++)
      printf(" %c",ch);
     }
printf("\n");
}


