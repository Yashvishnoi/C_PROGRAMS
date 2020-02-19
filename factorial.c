#include<stdio.h>
main()
{
int a,i,x=1;
printf("enter the number");
scanf("%d",&a);
for(i=a;i>0;i--)
{
x=x*i;
}
printf("factorial of entered number is %d",x);
}
