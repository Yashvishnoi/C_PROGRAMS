#include<stdio.h>
main()
{
int a,i,y=0,x,b;
printf("ENTER A NUMBER");
scanf("%d",&a);
b=a;
for(i=a;i>0;i=i/10)
{
x=i%10;
y=y+(x*x*x);
}
if(b==y)
printf("ARMSTRONG NUMBER");
else
printf("OH OH NOT A ARMSTRONG");
}
