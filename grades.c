#include<stdio.h>
int main()
{
int marks;
printf("enter the marks");
scanf("%d",&marks);
if(marks>=91 && marks<=100)
{
printf("grade is A");
}
else if(marks>=81 && marks<=90)
{
printf("grade is B");
}
else if(marks >=71 && marks<=80)
{
printf("grade is C");
}
else if(marks>=61 && marks<=70)
{
printf("grade is D");
}
else if(marks>=60 && marks<=50)
{
printf("grade is E");
}
else
{
printf("grade is F");}
}

