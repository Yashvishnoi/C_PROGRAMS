#include<stdio.h>
main()
{
int a,i,j;
printf("enter a number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
printf("\n");
for(j=0;j<=a;j++)
printf("%d",j);
}
}
