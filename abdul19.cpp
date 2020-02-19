#include<iostream>
using namespace std;
int main()
{
int n,i,a,b=0;
cin>>n;
for(i=n;i>=1;i=i/10)
{
a=i%10;
b=b*10+a;
}
if(n==b)
cout<<"number is palindrom";
else
cout<<"number is not palindrom";
return 0;
}
