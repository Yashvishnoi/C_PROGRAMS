#include<stdio.h>
#include<math.h>
int main()
{
int x,i;
float y=0;
printf("enter the value of x");
scanf("%d",&x);
for(i=1;i<=7;i++)
{
if(i==1)
y=y+pow((x-1.0)/x,i);
else
y=y+1.0/2*pow((x-1.0)/x,i);
}
printf("log%d=%f",x,y);
return 0;
}
