#include<stdio.h>
void function(float*);
int main()
{ 
float x;
//printf("2 num");
//scanf("%d%d",&a,&b);
//c=&a;
//d=&b;
function(&x);
printf("average of two number is %f",x);
return 0;
}
void function(float *x)
{
float a,b;
printf("2 num");
scanf("%f%f",&a,&b);
*x=(a+b)/2;
}
