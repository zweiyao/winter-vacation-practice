#include<bits/stdc++.h>
using namespace std;
int n;
int g[25][25],S[25];
int f[1100000][25];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>g[i][j];
	}
	
	int m=(1<<n)-1;
	memset(f,0x3f,sizeof(f));
	f[1][1]=0;
	for(int s=1;s<=m;s++)
	{
		int t=0;
		memset(S,-1,sizeof(S));
		for(int i=0;i<n;i++)
		{
			if((1<<i)&s)S[++t]=i+1;
		}
		for(int i=1;i<=t;i++)
		{
			for(int j=1;j<=t;j++)
			{
				if(i==j)continue;
				f[s][S[i]]=min(f[s][S[i]],f[s^(1<<(S[i]-1))][S[j]]+g[S[j]][S[i]]);
			}
		}
	 } 
	 int ans=INT_MAX;
	 for(int i=1;i<=n;i++)
	 ans=min(ans,f[(1<<n)-1][i]+g[i][1]);
	 cout<<ans<<"\n";
	return 0;
 } 
