#include<stdio.h>
//int calsum(int a,int b,int c);
int main()
{
int a,b,c,sum;
printf("enter values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
sum=calsum(a,b,c);
printf("sum of three number is %d",sum);
return 0;
}
int calsum(int a,int b,int c)
{ 
int d;
d=a+b+c;
return (d); 
}
