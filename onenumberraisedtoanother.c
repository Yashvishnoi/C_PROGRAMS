#include<stdio.h>
main()
{
int a,b,x=1,i;
printf("enter two number");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
x=x*a;
}
printf("one number raised to another is %d",x);
}
