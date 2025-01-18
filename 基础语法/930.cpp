#include<bits/stdc++.h> 
using namespace std;
int a[105],m[105],f[105];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>m[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		f[i]=a[i];
		for(int j=i-1;j>=1;j--)
		{
			if(m[i]-m[j]>k)
			f[i]=max(f[i],f[j]+a[i]);
		}
	}
	int ret=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		if(f[i]>ret)
		ret=f[i];
	}
	cout<<ret;
	return 0;
}
