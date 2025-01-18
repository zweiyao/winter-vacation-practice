#include<bits/stdc++.h>
using namespace std;
int f[32][32];
int main()
{
	int n,m;
	cin>>n>>m;
	f[0][1]=1;
	for(int i=2;i<=n;i++)
	{
		f[0][i]=0;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j-1==0)
			f[i][j]=f[i-1][n]+f[i-1][j+1];
			else if(j==n)
			f[i][j]=f[i-1][j-1]+f[i-1][1];
			else
			f[i][j]=f[i-1][j-1]+f[i-1][j+1];
		}
	}
	cout<<f[m][1]<<endl;
	return 0;
}
