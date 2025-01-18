#include<bits/stdc++.h>
using namespace std;
int aw[105],av[105],bw[105],bv[105];
int f[105][10005];
int main()
{
	int n,TOT;
	cin>>n>>TOT;
	for(int i=1;i<=n;i++)
	{
		cin>>aw[i]>>av[i]>>bw[i]>>bv[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=TOT;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=aw[i])
			{
				f[i][j]=max(f[i][j],f[i-1][j-aw[i]]+av[i]);
			}
			if(j>=bw[i])
			{
				f[i][j]=max(f[i][j],f[i-1][j-bw[i]]+bv[i]);
			}
		}
	}
	cout<<f[n][TOT]<<endl;
  	return 0;
}

