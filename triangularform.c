#include<stdio.h>
main()
{
int a,i,j,k=0;
printf("enter a number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
printf("\n");
for(j=1;j<=i;j++)
{
k++;
// Added the comment
printf("%d",k);
}
}
}
