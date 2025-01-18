#include<bits/stdc++.h>
using namespace std;
int a[50005],f[50005][4];
int main()
{
	int n,m;
	cin>>n;
	a[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	cin>>m;
	f[0][0]=0;
	for(int i=m;i<=n;i++)
	{
		for(int j=1;j<=3;j++)
		{
			for(int t=0;i-t-m>=m*(j-1);t++)
			f[i][j]=max(f[i][j],f[i-m-t][j-1]+a[i-t]-a[i-m-t]);
		}
	}
	cout<<f[n][3]<<endl;
	return 0;
}
