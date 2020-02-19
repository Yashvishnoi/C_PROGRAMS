#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int A[5],c,i,p=0;
for(i=0;i<5;i++)
{
cin>>A[i];
}
cout<<"enter the number to be found";
cin>>c;
for(i=0;i<5;i++)
{
if(c==A[i])
{
p=1;
break;
}
}
if(p==1)
cout<<"the number is in the place "<<i+1;
else
cout<<"number is not found";
exit(0);
}
