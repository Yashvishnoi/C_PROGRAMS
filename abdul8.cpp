#include<iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"enter the values of a,b,c,d";
cin>>a>>b>>c;
d=(b*b-4*a*c)/(2*a);
if(d==0)
cout<<"real roots\n"<<d;
else if (d>0)
cout<<"rel roots\n"<<d;
else
cout<<"imaginary roots \n"<<d;
return 0;
}
