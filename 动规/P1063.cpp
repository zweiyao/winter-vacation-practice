#include<bits/stdc++.h>
using namespace std;
int a[210],f[210][210];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[n+i]=a[i];
	}
	for(int len=2;len<=n;len++)
	{
		for(int i=1;i<=2*n-len;i++)
		{
			int j=i+len-1;
			for(int t=0;t<len-1;t++)//ºÏ²¢µã 
			{
				f[i][j]=max(f[i][j],f[i][i+t]+f[i+t+1][j]+a[i]*a[i+t+1]*a[j+1]);
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,f[i][i+n-1]);
	}
	cout<<ans<<endl;
	return 0;
}
