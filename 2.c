/*Calculation of bonus*/
#include<stdio.h>
main()
{
int crtyr,yrofjng,totalyr;  //crtyr=current year,yrofjng= year of joining
printf("enter the data");
scanf("%d%d",&crtyr,&yrofjng);
totalyr = crtyr-yrofjng;
if(totalyr>3)
printf("Congratulation! you won 2500 rs");
}
