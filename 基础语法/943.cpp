#include<bits/stdc++.h>
using namespace std;
int m[205],t[205];
int f[205][10005];
int main()
{
	int T;
	cin>>T;
	int n,v;
	while(T--)
	{
	cin>>n>>v;
	memset(m,0,sizeof(m));
	memset(t,0,sizeof(t));
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		cin>>m[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>t[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=v;j++)
		{
			if(j<t[i])
			f[i][j]=f[i-1][j];
			else
			f[i][j]=max(f[i-1][j],f[i-1][j-t[i]]+m[i]);
		}
	}
	cout<<f[n][v]<<endl;
	}
  return 0;
}

