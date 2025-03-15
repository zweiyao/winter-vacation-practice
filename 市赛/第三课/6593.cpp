#include<bits/stdc++.h>
using namespace std;
int a[105],b[105];
int to[105];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	to[1]=2,to[n]=n-1;
	b[2]++,b[n-1]++; 
	for(int i=2;i<n;i++)
	{
		if(a[i+1]-a[i]<a[i]-a[i-1])to[i]=i+1;
		else to[i]=i-1;
		b[to[i]]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)ans++;
	}
	//考虑两个互传且不能被传的情况
	for(int i=1;i<n;i++)
	{
		if(b[i]==1&&b[i+1]==1&&to[i]==i+1&&to[i+1]==i)
		ans++;
	 } 
	 cout<<ans;
  return 0;
}

