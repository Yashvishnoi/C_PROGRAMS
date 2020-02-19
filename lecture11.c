#include<stdio.h>
void main()
{
int a[10],i,sum=0,avg;
printf("EnTer 10 NUMBER If YOU ARE MY SERVENT");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=0;i<=9;i++)
sum=sum+a[i];
avg=sum/10.0;
printf("average is %d",avg);
}

