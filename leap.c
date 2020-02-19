#include<stdio.h>
main()
{
int x;                    // x=YEAR
printf("ENTER THE YEAR ");
scanf("%d",&x);
if(x%400==0)
printf("%d YEAR IS LEAP YEAR",x);
else if(x%100!=0)
printf("%d YEAR IS  LEAP YEAR",x);
else if(x%4==0)
printf("%d  IS LEAP YEAR",x);
else
printf("ENTeR YEar is NoT a leap year");
}
