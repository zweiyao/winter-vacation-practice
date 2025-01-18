#include<bits/stdc++.h>
using namespace std;
int p[105],f[105][105];
int main()
{
	int m,k;
	cin>>m>>k;
	for(int i=1;i<=m;i++)
	{
		cin>>p[i];
	}
	//ÇóÇ°×ººÍ
	for(int i=2;i<=m;i++)
	{
		p[i]+=p[i-1];
	}
	memset(f,0x3f,sizeof(f));
	f[0][0]=0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=k;j++)
		{
			for(int t=1;i-t>=j-1;t++)
			{
				f[i][j]=min(f[i][j],max(f[i-t][j-1],p[i]-p[i-t])); 
			}
		}
	}
	cout<<f[m][k]<<endl;
	return 0;
}
