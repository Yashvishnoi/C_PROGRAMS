#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int i,num,l=0,p=0,h=4,mid,A[5]={2,7,12,86,99};
cout<<"enter the number";
cin>>num;
while(l<=h)
{
mid=(l+h)/2;
if(num==A[mid])
p++;
else if(A[mid]<num)
l=mid+1;
else 
h=mid-1;
}
if(p==1)
cout<<"number is found";
else
cout<<"number is not found";
return 0;
}
