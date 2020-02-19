#include<stdio.h>
int fun(int);
int x=0;
int main()
{
	int i,n,k;
	//int ar[n];
	printf("enter the value of n");
	scanf("%d",&n);
	int ar[n];
	
	printf("enter the values ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++)	
	 fun(ar[i]);
	
	printf("%d\n",x);	

	return 0;
}
int fun(int p)
	{
	x=x+p;
	
	return 0;
	}
