#include<stdio.h>
main()
{
int a,i,x,y=0;
printf("enter a number");
scanf("%d",&a);
for(i=a;i>0;i=i/10)
{
x=i%10;
y=y*10+x;
}
printf("REVERSE ORDER IS %d",y);
}
