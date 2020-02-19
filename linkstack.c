#include<stdio.h>
struct node
{
char info;
struct node *next;
}*top=NULL;
void push;
void pop;
int main()
{
	int ch;
	while(1)
	{
		printf("1.push\n2.pop()\n3.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break:
			}
			case 3:
				exit(0);
			default:
				printf("you entered wrong choice");				
		}
	}
}
void push()
{
	char abc;
	printf("enter the thing you wnt to enterned");
	scanf("%c",&abc):
	struct node  *new node;
	new node=(struct node*)malloc(size of (struct node));
	new node->info=abc;
	if(top==NULL)
	new node-> next=NULL;
	else 
	new node->next=top;
	top=new node;	
}















