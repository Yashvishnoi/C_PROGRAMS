#include<iostream>
using namespace std;
int main()
{
int max,i,A[5]={2,3,5,6,9};
max=A[0];
for(i=0;i<5;i++)
{
if(A[i]>max)
max=A[i];
}
cout<<"maximum number is"<<max;
return 0;
}
