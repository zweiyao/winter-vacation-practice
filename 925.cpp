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
		f[i]=1;
		for(int j=i-1;j>=1;j--)
		{
			if(a[i]<=a[j])
			f[i]=max(f[i],f[j]+1);
		}
	}
	int ret=0;
	for(int i=1;i<=n;i++)
	{
		ret=max(ret,f[i]);
	}
	cout<<ret<<endl;
	return 0;
}
