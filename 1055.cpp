#include<bits/stdc++.h>
using namespace std;
int t[105];
int f[105][10005];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i]; 
	} 
	f[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(j<t[i])
			f[i][j]=f[i-1][j];
			else
			f[i][j]=f[i-1][j]+f[i-1][j-t[i]];
		}
	}
	cout<<f[n][m]<<endl;
  return 0;
}

