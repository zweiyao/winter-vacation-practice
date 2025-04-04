#include<bits/stdc++.h>
using namespace std;
int p[105],h[105],c[105];
int f[105][1005];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>p[i]>>h[i]>>c[i];
	} 
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int t=0;t<=c[i];t++)
			if(j>=t*p[i])
			f[i][j]=max(f[i][j],f[i-1][j-t*p[i]]+t*h[i]);
		}
	}
	cout<<f[m][n]<<endl;
  return 0;
}

