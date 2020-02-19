#include<iostream>
using namespace std;
int typedef marks;
int main()
{
marks m1,m2,m3;//t=total
cin>>m1>>m2>>m3;
float avg;
avg=(m1+m2+m3)/3.0;
cout<<"average is "<<avg;
if(avg>60)
cout<<"A";
else if(30<avg<60)
cout<<"B";
else
cout<<"C";

return 0;
}
