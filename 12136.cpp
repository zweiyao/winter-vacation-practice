#include<bits/stdc++.h>
using namespace std;
int a[2505],f[2505];
int main()
{
	int n,m;
	cin>>n>>m;
	a[0]=0;
	cin>>a[1];
	a[1]+=m;
	for(int i=2;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	memset(f,0x3f,sizeof(f));
	f[0]=-1*m;
	for(int i=1;i<=n;i++)
	{
		for(int t=0;t<=i-1;t++)
		{
			f[i]=min(f[i],f[i-1-t]+a[t+1]+m);
		}
	}
	cout<<f[n]<<endl;
	return 0;
}
