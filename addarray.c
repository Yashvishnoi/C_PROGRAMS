#include<stdio.h>
int main()
{
	int n,m,i,j,sum=0;
	printf("enten and m");
	scanf("%d%d",&n,&m);
	int a[n][m];
	int b[n][m];
	int c[n][m];
	printf("Enter first array");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter second array");
for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&b[i][j]);
	}
	/*for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<m;j++)q
		printf("%d  ",a[i][j]);
		//printf("%d\n ",b[i][j]);
	} 
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<m;j++)
		//printf("%d  ",a[i][j]);
		printf("%d ",b[i][j]);
	} */
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<m;j++)
		c[i][j]=b[i][j]+a[i][j];
		printf("%d ",c[i][j]);
	}
/*for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<m;j++)
		//c[i][j]=b[i][j]+a[i][j];
		printf("%d ",c[i][j]);
	}*/
	
	return 0;
}
