#include<stdio.h>
main()
{
int a,b,c,a1=0,b1=0,c1=0;
float avg;
printf("ENTER THREE NUMBER");
scanf("%d%d%d",&a,&b,&c);
if(a>40)
{
a1=a;
}
if(b>40)
{
b1=b;
}
if(c>40)
{
c1=c;
}
avg=(a1+b1+c1)/3;
printf("%f",avg);
}
