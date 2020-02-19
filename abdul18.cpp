#include<iostream>
using namespace std;
int main()
{
int n,i,a,b,c=0;
cin>>n;
for(i=n;i>=1;i=i/10)
{
a=i%10;
b=a*a*a;       
c=c+b;
}
if(n==c)
cout<<"number is armstrong";
else
cout<<"@#$%^&*";
return 0;
}

