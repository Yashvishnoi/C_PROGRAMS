#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0,x=2*n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(x==sum)
	cout<<"number is perfect";
	else	
	cout<<"tum chutiya ho";
	return 0;
}
