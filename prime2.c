#include<stdio.h>
main()
{
int a,i,p=0;
printf("enter a number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
p++;
}
if(p==2)
printf("number is prime");
else
printf("number is not prime");
}
