#include<stdio.h>
int main()
{
int a,b,sum;
printf("enter two number");
scanf("%d%d",&a,&b);
sum=(a*a-b*b)/(a-b);
printf("sum of two number is %d",sum);
return 0;
}
