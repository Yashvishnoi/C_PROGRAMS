#include<iostream>
using namespace std;
int main()
{
float n,b,a,d;
cout<<"enter the basic salary percentage alowance percentage deduction";
cin>>b;
cin>>a;
cin>>d;
n=b+(b*a)/100+(b*d)/100;
cout<<"the net salary is "<<n;
return 0;
}
