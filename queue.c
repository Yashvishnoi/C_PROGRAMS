#include<stdio.h>
#include<stdlib.h>

#define max 5

int stack[max],front=-1,rear=-1,i;
void insertion();
void deletion();
void display();
int main()

{
	int a;
	while(1)
	{
		printf("enter your choice");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			{
				insertion();
				break;	
			}
			case 2:
			{
				deletion();
				break;
			}
			case 3:
			{
				exit(0);
			}
			default:
				printf("wrong choice");
		}
	}
	return 0;
}

void insertion()
{
	//printf("your choice is to insertion");
	int new;
	if((front==0&&rear==max-1)||(front=rear+1))
	{
		printf("over flow");
		return;
	}
	printf("enter the number you wanted to enterned");
	scanf("%d",&new);
	if(front==NULL)
	{	
	front=0;
	rear=0;
	}
	else
	{
		if(rear=max-1)
		rear=0;
		else
		rear=rear+1;
	}	
	stack[rear]=new;
	for(i=front;i<=rear;i--)
	printf("%d\n",stack[i]);
}

void deletion()
{
	printf("your choice is to deletion");
}










