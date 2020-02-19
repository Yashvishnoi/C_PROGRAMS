#include<iostream>
using namespace std;
int main()
{
int n,i,b=0,s=0;
cin>>n;
for(i=n;i>=1;i=i/10)
{
s=i%10;
b=b*10+s;
}
cout<<b;
return 0;
}



