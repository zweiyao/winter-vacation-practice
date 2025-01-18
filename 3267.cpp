#include<bits/stdc++.h>
using namespace std;
int a[1445],f[1445],g[1445];
int main()
{
	int n,t,m;
	cin>>n>>t>>m; 
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	f[0]=-t;
	g[0]=0;
	for(int i=1;i<=m;i++)
	{
		f[i]=INT_MAX;
		for(int j=1;j<=i&&j<=n;j++)
		{
			int k=max(f[i-j]+t,a[i])+t;
			if(k<f[i])
			{
				f[i]=k;
				g[i]=g[i-j]+1;
			}
			else if(k==f[i])
			g[i]=min(g[i],g[i-j]+1);
		}
	}
	cout<<f[m]<<' '<<g[m]<<endl;
  return 0;
}

