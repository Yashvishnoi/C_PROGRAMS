#include<stdio.h>
int main()
{
int i,j,k,sum=0,c[3][3];
int ar[3][3];
int br[3][3];
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&ar[i][j]);
	}
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d",ar[i][j]);
		printf("\n");
	}
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&br[i][j]);
	}
for(i=0;i<3;i++)
	{ 
		for(j=0;j<3;j++)
		printf("%d",br[i][j]);
		printf("\n");
	}
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			c[i][j]=c[i][j]+(ar[i][k]*br[k][j]);
			printf("%d",c[i][j]);
		}
         printf("\n");
	}
	
return 0;
}
