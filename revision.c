#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
x=greater(a,b,c);
printf("greater number of three number %d",x);
return 0;
}
int greater(int a,int b,int c)
{
if(a>b&&a>c)
printf("greater number is %d",a);
if(b>c&&b>a)
printf("greater number is %d",b);
if(c>a&&c>b)
printf("greater number is %d",c);
} 
