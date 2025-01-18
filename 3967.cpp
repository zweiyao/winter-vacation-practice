#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int num=0;
	double price=0,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num>>price;
		sum+=num*price;
	}
	cout<<fixed<<setprecision(1)<<sum<<endl;
	return 0;
} 
