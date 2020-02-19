#include<stdio.h>
#include<stdlib.h>
int stack[10],top=-1,temp,value,i;
void push();
void pop();
void main()
{
	int a;

	while(1)
	{
		printf("enter your choice\n 1. push\n2.pop\n3.exit");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				exit (0);
				break;
			}
			default:
				printf("you entered wrong choice");
		}
	}
}
	void push()
	{
		if(top==10)
		printf("overflow");
		else
			{
				printf("enter the value");
				scanf("%d",&value);
				top=top+1;
				stack[top]=value;
				for(i=top;i>=0;i--)
				printf("%d\n",stack[i]);
			}
	}
	void pop()
	{
printf("\n");
		if(top==-1)
		printf("underflow");
		else
		{
			temp=stack[top];
			top=top-1;
			for(i=top;i>=0;i--)
			printf("%d\n",stack[i]);
		}
	}













