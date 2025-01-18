#include<bits/stdc++.h>
using namespace std;
long long a[150000];
long long s[150000]={0}; 
int main()
{
	int n,m;
	long long temp;
	int l,r;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	//ÇóÇ°×ººÍ 
	for(int i=1;i<=n;i++)
	{
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>l>>r;
		temp=s[r]-s[l-1];
		cout<<temp<<endl;
	}
	return 0;
 } 
