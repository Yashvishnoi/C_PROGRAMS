/*  1.  #include<stdio.h>

int main()
{
	int a,n,p=0,i;
	scanf("%d",&a);
	for(i=a;i>=1;i=i/10)
	{
		n=i%10;
		p=p*10+n;
	}
	if(p==a)
	printf("number is palindrom");
	else
	printf("not a mature guy");
	return 0;
}*/


/* 2. #include<stdio.h>
#include<math.h>

int main()
{
	int a,n,p=0,i,sum=0;
	scanf("%d",&a);
	for(i=a;i>=1;i=i/10)
	{
		n=i%10;
		p++;
	}
	
	for(i=a;i>=1;i=i/10)
	{
		n=i%10;
		sum=sum+pow(n,p);
	}		
	if(sum==a)
	printf("not a mature guy");
	else
	printf("suck my dick");
	return 0;
}*/



 /*   3.#include<stdio.h>

int main()
{
	int a=0,b=1,c,d,i;
	printf("fabiconi series\n");
	printf("%d\n%d",a,b);
	scanf("%d",&c);
	for(i=a;i<=c-2;i++)
	{
		d=a+b;  
		printf("%d\n",d);
		a=b;
		b=d;
	}
	return 0;
}*/



 /*   4.  #include<stdio.h>

int main()
{
	int a,b,c,d=0,i;
	printf("enter digit \n");
	scanf("%d",&a);
	for(i=a;i>=1;i=i/10)
	{
		b=i%10;
		d=d+b;
	}
	printf("sum of number is %d",d);
	return 0;
}*/




/* #include<stdio.h>

int main()
{
	int a,b,c=0,d=0,i;
	printf("enter digit \n");
	scanf("%d",&a);
	for(i=a;i>=1;i=i/10)
	{
		b=i%10;
		if(b==1)
		c++;
		if(b==2)
		d++;
	}
	printf("number of twos is  %d\n",d);
	printf("number of onesw is %d",c);
	return 0;
}*/



/*   5.   int main()
{
	int a,b,c=0,d=0,i;
	printf("enter digit \n");
	scanf("%d",&a);
	for(i=a;i>=1;i=i/10)
	{
		b=i%10;
		d=d*10+b;
	}
	printf("reverse order is   %d\n",d);
	//printf("number of onesw is %d",c);
	return 0;
}*/ 




 /*#include<stdio.h>
int main()
{
	int a,b=1,c=0,d=0,i;
	printf("enter digit \n");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		b=b*i;
	}
	printf("factorial  is  %d\n",b);
	//printf("number of onesw is %d",c);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int a,b,c,d=0,i;
	printf("enter digit \n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		d=d+a;
	}
	printf("factorial  is  %d\n",d);
	//printf("number of onesw is %d",c);
	return 0;
}*/




/*#include<stdio.h>
int main()
{
	int a,b,c,d=0,i;
	printf("enter digit \n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		d=d+a;
	}
	printf("factorial  is  %d\n",d);
	//printf("number of onesw is %d",c);
	return 0;
}*/




/*#include<stdio.h>
int main()
{
	char i;
	unsigned int j;
	for(j=0;j<256;j++)
	{
		printf(" %d\n %c",i,i);
		i=i+1;
}
	return 0;
}*/







#include<stdio.h>

int main()

{
	int a,b;
	printf("enter your choice \n 1.breakfast\n 2.lunch\n 3.dinner");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		{
			printf("you entered for breakfast \n 1.idli\n2.dosa");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
				printf("idli is served");
				break;
				case 2:
				printf("dosa is served");
				break;
				default:
				printf("your mother is coming for cooking this");
			}
		break;
		}
		case 2:
		{
			printf("youn entered for lunch\n 1.kadi\n2.rajaAm");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
				printf("kadi");
				break;
				case 2:
				printf("rajma");
				break;
				default:
				printf("your mother is coming for cooking this");
			}
		break;
		}
		case 3:
		{
			printf("entered dinner\n1.chicken tikka\n2.chicken raita");
			scanf("%d",&b);
			switch(b)			
			{
				case 1:
				printf("chicken tikka");
				break;
				case 2:
				printf("chicken raita");
				break;
				default:
				printf("your mother is coming for cooking this");
			}
		break;
		}
		
		default:
			printf("your mother is coming for cooking this");
	}
	return 0;
}





































