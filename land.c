#include<stdio.h>
void areaperi(int, float*,float*);
int main()
{
	int radius;
	float area,perimeter;
	printf("enter radius");	
	scanf("%d",&radius);
	areaperi(radius,&area,&perimeter);
	printf("area of circle =%f\n",area);
	printf("perimeter of circle is %f\n",perimeter);
	return 0;
}
void areaperi(int r,float*a,float*p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;
}
