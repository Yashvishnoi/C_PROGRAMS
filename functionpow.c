#include<stdio.h>
#include<math.h>
int power(int x,int y);
int main()
{
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	j= power(a,b);
	printf("power of raised number one to another is %d",j);
	return 0;	
}
int power(int x,int y)
{
	int d;
	d=pow(x,y);
	return(d);
}
