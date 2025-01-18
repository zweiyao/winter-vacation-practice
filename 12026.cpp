#include<bits/stdc++.h>
using namespace std;
int a[25][25];
long long f[25][25];
int main()
{
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	memset(a,0,sizeof(a));
	memset(f,0,sizeof(f));
	a[x][y]=1;
	a[x+1][y+2]=1;
	a[x+2][y+1]=1;
	if(y-1>=0)
	a[x+2][y-1]=1;
	if(x-2>=0&&y-1>=0)
	a[x-2][y-1]=1;
	if(y-2>=0)
	a[x+1][y-2]=1;
	if(x-1>=0&&y-2>=0)
	a[x-1][y-2]=1;
	if(x-2>=0)
	a[x-2][y+1]=1;
	if(x-1>=0)
	a[x-1][y+2]=1;
	if(a[0][0]==1)
	f[0][0]=0;
	else
	f[0][0]=1;
	for(int j=1;j<=n;j++)
	{
		if(a[j][0]!=1)
			f[j][0]=f[j-1][0];
		else
			f[j][0]=0;
	}
	for(int j=1;j<=m;j++)
	{
		if(a[0][j]!=1)
			f[0][j]=f[0][j-1];
		else
			f[0][j]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]!=1)
				f[i][j]=f[i-1][j]+f[i][j-1];
			else
				f[i][j]=0;	
		}
	}
	cout<<f[n][m]<<endl;
	return 0;
}
