#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,c,r1,r2;
cout<<"enter the values of a, b,c";
cin>>a>>b>>c;
r1=(-b+sqrt(b*b-4*a*c))/(2*a);
r2=(-b-sqrt(b*b-4*a*c))/(2*a);
cout<<"the square root of a number is "<<r1<<"and"<<r2;
return 0;
}
