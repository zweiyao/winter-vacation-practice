#include<bits/stdc++.h>
using namespace std;
int a[105],f[105][105];
int main()
{
	int n,m;
	cin>>n>>m;
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]; 
	}
	for(int i=0;i<=n;i++)
	{
		f[0][i]=1;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int t=0;t<=a[j];t++)
			{
				if(i-t>=0)
				f[i][j]+=f[i-t][j-1];
				f[i][j]=f[i][j]%1000007;
			}
		}
	}
	cout<<f[m][n]<<endl;
	return 0;
}
