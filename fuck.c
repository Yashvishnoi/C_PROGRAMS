#include<stdio.h>

int main()

{
	int n,i;
	int a[n];
	printf("enter the value of array declaration");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	for(i=0;i<n;i++)
	printf("entered number is %d",a[i]);
	return 0;
}
