#include<stdio.h>
int sum(int , int );
int subtract(int ,int);
int mul(int, int);
float div(float,float);
int main()
{
int a,b,c,d,k,j,v,s,p;
float g;
printf("enter two number\n");
scanf("%d%d",&a,&b);
k=sum(a,b);
printf("sum of two number is %d\n",k);
printf("enter the values of c");
scanf("%d",&c);
j=subtract(k,c);
printf("subtract of two number is %d\n",j);
printf("enter the values of d");
scanf("%d",&d);
p=mul(j,d);
printf("multiply of two number is %d\n",p);
printf("enter the value of g");
scanf("%f",&g);
float z=div(p,g);
printf("division of two number is %f\n",z);
return 0;
}
int sum(int x,int y)
{
int d;
d=x+y;
return(d);
}
int subtract(int x,int y)
{
int s;
s=x-y;
return(s);
}
int mul(int x,int y)
{
int q;
q=x*y;
return(q);
}
float div(float b,float o)
{
float w;
w=b/o;
return(w);
}
