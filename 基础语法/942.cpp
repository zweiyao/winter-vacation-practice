#include<bits/stdc++.h>
using namespace std;
int v[105],w[105];
int f[105][100005];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<v[i])
			f[i][j]=f[i-1][j];
			else
			f[i][j]=max(f[i-1][j],f[i-1][j-v[i]]+v[i]*w[i]);
		}
	}
	cout<<f[m][n]<<endl;
  return 0;
}

