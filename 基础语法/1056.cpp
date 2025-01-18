#include<bits/stdc++.h>
using namespace std;
int f[5005][5005];
int main()
{
	int n;
	cin>>n;
	f[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(j<i)
			f[i][j]=f[i-1][j]%1000000007;
			else
			f[i][j]=(f[i-1][j]+f[i][j-i])%1000000007;
		}
	}
	cout<<f[n][n]<<endl;
  return 0;
}

