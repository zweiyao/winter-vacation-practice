#include<bits/stdc++.h> 
using namespace std;
int a[1005],f[1005];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		f[i]=a[i];
		for(int j=i-1;j>=1;j--)
		{
			if(a[i]>a[j])
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
