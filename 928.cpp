#include<bits/stdc++.h>
using namespace std;
int a[5005],f1[5005],f2[5005];
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
		if(f1[i]>f2[i])
		ret=max(ret,f1[i]);
		else
		ret=max(ret,f2[i]);
	}
	cout<<ret<<endl;
	return 0;
}
