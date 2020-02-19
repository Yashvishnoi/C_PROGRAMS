#include<stdio.h>
main()
{
int a,i,j,k;
printf("enter a number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
printf("\n");
for(j=a;j>=i;j--)
printf(" ");
for(k=i;k>=1;k--)
printf("%d",k);
}
}
