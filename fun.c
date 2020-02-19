#include<stdio.h>

//int greater(int x, int y, int z);

int main()
{
	int a, b, c;
	//a=1;
	//printf("%d %d %d", a, ++a, a++);
	scanf("%d%d%d", &a, &b, &c);
	printf("Greatest number : %d\n", greater(a, b, c));
	return 0;
}


int greater(int x, int y, int z)
{
	if(x>y && x>z)
		return x;
	else if(y>x && y>z)
		return y;
	else
		return z;
}
