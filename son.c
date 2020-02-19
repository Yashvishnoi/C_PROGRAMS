#include<stdio.h>
int main()
{
int i,a,c,x;
c=0;
printf("ENTER A NJMBER:");
scanf("%d",&a);
for(i=a;i>0;i=i/10)
{
 x=i%10;
 c=c+x;
}
printf("sum is : %d",c);
return 0;
}
