
#include<stdio.h>
void main()
{
int sp,cp;
float p,l;
printf("enter the value of sp &cp");
scanf("%d%d",&sp,&cp);
if(sp>cp)
{
printf("YOU HAVE LOOTED COUSTMER\n");
p=((sp-cp)/cp)*100;
printf("Percentage you looted the coustmer is %f",p);
}
else
{
printf("YOU ARE IN LOSS\n");
l=((cp-sp)/cp)*100;
printf("PERCENTAGE YOU LOSS IS %f",l);
}
return 0;
}
