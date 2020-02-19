#include<stdio.h>

int main()
{
	int a, c;
	int *b;
	a=4;
	b=&a;
	printf("%d %d %u %u",*b, a, b, &a);
	return 0;
}
	
