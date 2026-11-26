#include<stdio.h>
int isprime(int n);
int isperfect(int n);
int reversenumber(int n);
int ispalindrome(int n);
int digitsum(int n);
void report(int n);

int main()
{
int n;
printf("Enter a positive number:");
scanf("%d",&n);
report(n);




return 0;
}
int isprime(int n)
{ if( n<=1)
for(int i=2;i<=n/2;i++)
{ 
if(n%i==0)
return 0;
else 
return 1;

}
int isperfect(int n)
{int sum=0;
for(int i=1;i<n;i++)
{
if(n%i==0)
sum=sum+i;
}
if(sum==n)
return 1;
else
return 0;

}
int reversenumber(int n)
{
int rev=0;
while(n>0 )
{
int temp=n%10;
rev=rev*10+temp;
n=n/10;
}
return rev;
}
int ispalindrome(int n)
{

  if(n==reversenumber(n))
return 1;
else 
return 0;
}
int digitsum(int n)
{
int sum=0;
while(n>0)
{
sum+=(n%10);
n=n/10;
}
return sum;
}
  
void report(int n)
{
printf("\nPrime:");
if(isprime(n)==1)
printf("yes");
else
printf("No");

printf("\nPerfect:");
if(isperfect(n)==1)
printf("Yes");
else 
printf("No");

printf("\nReverse:%d",reversenumber(n));

printf("\nPalindrome:");
if(ispalindrome(n)==1)
printf("Yes");
else
printf("No");

printf("\nSum of digits:%d",digitsum(n));

printf("\nPrimes from 1 to %d:",n);
for(int k=1;k<=n;k++)
{
if(isprime(k)==0)
continue; 
printf("%d",k);

}


} 
}
