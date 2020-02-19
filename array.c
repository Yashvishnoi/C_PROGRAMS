#include<stdio.h>

int main()
{
	int n,i,y=1,x,k;

	scanf("%d",&n);

	int a[n];

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{				
		y=1;

		for(k=a[i];k>=1;k--)
			y=y*k;
				
		printf("%d ",y);
	}
	printf("\n");
	
	return(0);
}
