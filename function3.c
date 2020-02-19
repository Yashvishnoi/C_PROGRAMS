#include<stdio.h>
int fact(int x);
int main()
{

	int a,d;
	printf("enter number");
	scanf("%d",&a);
	d=fact(a);
printf("%d",d);
	return 0;
}
int fact(int x)
{
	int i,y=1;
	for(i=x;i>=1;i--)
	y=y*i;
	return(y);
}


