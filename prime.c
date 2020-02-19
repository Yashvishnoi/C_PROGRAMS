#include<stdio.h>
main()
{
int a,i,p=0;
printf("ENTER A NUMBER");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
p++;
}
if(p==2)
printf("NUMBER IS PRIME");
else
printf("NUMBER IS NOT PRIME");
}

