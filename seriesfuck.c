#include<stdio.h>
int main()
{
int a,i,j,k;
printf("number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
printf("\n");
for(j=a-i;j>=1;j--)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("1");
}
}
return 0;
}
