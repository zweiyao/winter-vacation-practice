#include<bits/stdc++.h>
using namespace std;
int v[6],f[1005][10005];
int main()
{
	int n,k;
	cin>>n>>k;
	v[1]=1;v[2]=5;v[3]=10;v[4]=25;v[5]=50;
	memset(f,0,sizeof(f));
	f[0][0]=1;
	for(int t=1;t<=5;t++)
	{
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(j>=v[t])
				f[i][j]=(f[i][j]+f[i-1][j-v[t]])%19260817;
				else
				continue;
			}
		}
	}
	int ret=0;
	for(int i=0;i<=k;i++)
	{
		ret=(ret+f[i][n])%19260817;
	}
	cout<<ret<<endl;
  return 0;
}

