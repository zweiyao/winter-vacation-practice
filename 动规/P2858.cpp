#include<bits/stdc++.h>
using namespace std;
int v[2005],f[2005][2005];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
		f[i][i]=v[i]*n;
	}
	for(int len=2;len<=n;len++)
	{
		for(int i=1;i<=n-len+1;i++)
		{
			int j=i+len-1;
			f[i][j]=max(f[i+1][j]+v[i]*(n-len+1),f[i][j-1]+v[j]*(n-len+1));
		}
	}
	cout<<f[1][n]<<endl;
  return 0;
}

