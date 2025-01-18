#include<bits/stdc++.h>
using namespace std;
int jiecheng(int n)
{
	int ret=1;
	for(int i=1;i<=n;i++)
	ret*=i;
	return ret;
}
int sum(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	cout<<sum(n)<<endl<<jiecheng(n)<<endl;
	return 0;
	
}
