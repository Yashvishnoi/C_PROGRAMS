#include<stdio.h>
main()
{
add();
even();
add();
even();
}
add()
{
 int a,b,c;
 printf("enter two number\n");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("sum of two number is %d\n",c);
}
even()
{
 int a;
 printf("enter a number\n");
 scanf("%d",&a);
 if(a%2==0)
 printf("no. is even\n");
 else
 printf("number is odd\n");
}

