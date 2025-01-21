#include<bits/stdc++.h>
using namespace std;
int f[10010];
int main()
{
	int n,t;
	cin>>n;
	int sum=0;
	f[0]=1;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		sum+=t;
		for(int j=10010;j>=t;j--)
		f[j]|=f[j-t];
	}
	int ans=INT_MAX;
	for(int i=1;i<=sum;i++)
	{
		if(f[i])
		ans=min(ans,max(i,sum-i));
	}
	cout<<ans<<endl;
  return 0;
}

