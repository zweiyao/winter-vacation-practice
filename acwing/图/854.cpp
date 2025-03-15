#include<bits/stdc++.h>
using namespace std;
int n,m,g;
int f[205][205]; 
int main()
{
    cin>>n>>m>>g;
	memset(f,0x3f,sizeof(f));
	for(int i=1;i<=n;i++)
	f[i][i]=0;
	cout<<f[4][4]<<endl;
	for(int i=1;i<=m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(f[x][y]>z)
		f[x][y]=z;
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(f[i][k]!=0x3f3f3f3f&&f[k][j]!=0x3f3f3f3f)
				f[i][j]=min(f[i][j],f[i][k]+f[k][j]);
			}
		}
	}
	for(int i=1;i<=g;i++)
	{
		int x,y;
		cin>>x>>y;
		if(f[x][y]>0x3f3f3f3f/2)cout<<"impossible"<<endl;
		else cout<<f[x][y]<<endl;
	}
    return 0;
}
