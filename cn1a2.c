#include<stdio.h>
main()
{
int a,i,x,c=0,d=0;
printf("ENTER A NUMBER");
scanf("%d",&a);
for(i=a;i>0;i=i/10)
{
x=i%10;
if(x==2)
{
c=c+1;
}
if(x==3)
{
d=d+1;
}
}
printf("NUMBER OF 2's is %d and number of 3's is %d ",c,d);
}
