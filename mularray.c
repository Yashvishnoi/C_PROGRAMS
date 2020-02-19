#include<stdio.h>
int main()
{
	int n,m,i,j,sum=0;
	printf("enter a number");
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<m;j++)
		printf("%d ",a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<m;j++)
		sum=sum+a[i][j];
	}
	printf("sum of matrix is %d",sum);	
	return 0;
}
