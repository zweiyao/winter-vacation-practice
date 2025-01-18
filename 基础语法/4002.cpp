#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int temp=n;
	do
	{
		n=temp;
		sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
		temp=sum;
	}while(sum/10!=0);
	cout<<sum<<endl;
	return 0;
}
