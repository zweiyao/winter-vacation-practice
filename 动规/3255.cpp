#include<bits/stdc++.h>
using namespace std;
char a[105];
int b[105];
int f[105][105],g[105][105];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		a[n+i]=a[i];
		b[n+i]=b[i];
	}
	memset(g,0,sizeof(g));
	for(int i=1;i<=2*n;i++)
	{
		f[i][i]=b[i];
		g[i][i]=b[i];
	}
	for(int len=2;len<=n;len++)
	{
		for(int i=1;i<=2*n-len;i++)
		{
			int j=i+len-1;
			f[i][j]=INT_MIN;
			g[i][j]=INT_MAX;
			for(int k=i;k<j;k++)
			{
				if(a[k+1]=='+')
				{
					f[i][j]=max(f[i][j],f[i][k]+f[k+1][j]);
					g[i][j]=min(g[i][j],g[i][k]+g[k+1][j]);
				}
				else if(a[k+1]=='*')
				{
					f[i][j]=max(f[i][j],f[i][k]*f[k+1][j]);
					f[i][j]=max(f[i][j],g[i][k]*g[k+1][j]);
					g[i][j]=min(g[i][j],g[i][k]*g[k+1][j]);
					g[i][j]=min(g[i][j],f[i][k]*g[k+1][j]);
					g[i][j]=min(g[i][j],g[i][k]*f[k+1][j]);
				}
			}
		}
	}
	int ret=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		ret=max(ret,f[i][i+n-1]);
	}
	cout<<ret<<endl;
  return 0;
}

