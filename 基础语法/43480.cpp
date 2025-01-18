#include<bits/stdc++.h>
using namespace std;
int a[15000];
int s[15000]={0}; 
int main()
{
	int n,m;
	long long temp;
	cin>>n>>m;
	long long min=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	//ÇóÇ°×ººÍ 
	for(int i=1;i<=n;i++)
	{
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=n-m+1;i++)
	{
		temp=s[i+m-1]-s[i-1];
		if(temp<min)
		min=temp;
	}
	cout<<min<<endl;
	return 0;
 } 
