#include<stdio.h>
int main()
{
int n;
int temp=n;
int sum=0;
int digit;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
digit=n%10;
sum=sum+digit*digit*digit;
n=n/10;
}
if(temp==sum)
{
printf("%d","it is an armstrong number");
}
else
{
printf("%d","it is nota n armstrong number");
}
return 0;
}

