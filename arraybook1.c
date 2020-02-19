#include<stdio.h>
main()
{
int a,b,d=0;          //a=quantity,b=price,d=discount
float total;
printf("enter the quantity and price");
scanf("%d%d",&a,&b);
if(a>=1000)
d=10;
total=(a*b)-(a*b*10/100);
printf("TOTAL IS %f",total);
}
