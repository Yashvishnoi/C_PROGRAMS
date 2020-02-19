#include<iostream>
using namespace std;
int main()
{
int x,i,A[5],C=0;
cout<<"enter the didits";
for(i=0;i<5;i++)
{
cin>>A[i];
}
for(i=0;i<5;i++)
{
cout<<A[i];
}
for(i=0;i<5;i++)
{
C=C+A[i];
}
cout<<"sum of all number is"<<C;
return 0;
}
