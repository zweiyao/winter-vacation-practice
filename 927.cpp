#include<bits/stdc++.h>
using namespace std;
int a[2005],f1[2005],f2[2005];
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
		f1[i]=1;
		for(int j=i-1;j>=1;j--)
		{
			if(a[i]>a[j])
			f1[i]=max(f1[i],f1[j]+1);
		}
	}
	for(int i=n;i>=1;i--)
	{
		f2[i]=1;
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			f2[i]=max(f2[i],f2[j]+1);
		}
	}
	int ret=0;
	for(int i=1;i<=n;i++)
	{
		ret=max(ret,f1[i]+f2[i]);
	}
	cout<<n-ret+1<<endl;
	return 0;
}
