#include<stdio.h>
void areaperi(int,float*,float*);
int main()
{
	int r;
	float area,peri;
	printf("enter the value of radius");
	scanf("%d",&r);
	areaperi(r,&area,&peri);
	printf("area=%f\n",area);
	printf("perimeter=%f\n",peri);
	return 0;
}
void areaperi(int r,float*a,float*b)
{
	*a=2*3.14*r;
	*b=3.14*r*r;
}
