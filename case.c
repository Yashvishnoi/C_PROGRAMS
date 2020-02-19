#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,x,i,z,y=1,p=0; 
while(1)
{
printf("ENTER 1 FOR factorial of number\n");
printf("ENTER 2 FOR prime or not\n");
printf("ENTER 3 FOR odd or even\n");
printf("ENTER 4 FOR exit\n");

scanf("%d",&a);
switch(a)
{
case 1:
 printf("enter a number");
 scanf("%d",&z);
 for(i=z;i>=1;i--)
{
 y=y*i;	
}
 printf("factorial of entered number is %d",y);
 break;
case 2:
 printf("enter a number");
 scanf("%d",&x);
 for(i=1;i<=x;i++)
{
 if(x%i==0)
 p++;
}
 if(p==2)
 printf("prime number");
 else 
 printf("not a prime number");
 break;
case 3:
 printf("enter a number");
 scanf("%d",&x);
 if(x%2==0)
 printf("even number");
 else
 printf("odd number");
 break;
case 4:
 exit(1);
default:
printf("choice is invalid\n");
}  
}
return 0;  
}
