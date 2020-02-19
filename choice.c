#include<stdio.h>
main()
{
int choice,a,b,s;
printf("1.Addition of two number\n");
printf("2.Either number is odd or even\n");
printf("3.Write first n natural number\n");
printf("Enter YOUR CHOICE\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("write two number");
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("sum of two number is %d",s);
        break;
case 2:printf("ENTER A NUMBER");
      scanf("%d",&a);
      if(a%2==0)
      printf("NUMBER IS EVEN");
      else
      printf("NUMBDER IS ODD");
      break;
case 3:printf("ENTER A NUMBER");
       scanf("%d",&a);
       for(b=1;b<=a;b++);
       printf("%d",b);
       break;
default: printf("choice is invalid");
}
}
