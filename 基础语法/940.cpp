#include<bits/stdc++.h>
using namespace std;
int m[105];
int f[105][100005];
int main()
{
	int v,n;
	cin>>v>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=v;j++)
		{
			if(j<m[i])
			f[i][j]=f[i-1][j];
			else
			f[i][j]=max(f[i-1][j],f[i-1][j-m[i]]+m[i]);
		}
	}
	cout<<v-f[n][v]<<endl;
  return 0;
}

