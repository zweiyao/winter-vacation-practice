#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int f[105][105]; 
signed main()
{
	int n,k;
	cin>>n>>k;
	f[0][0]=1;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=k;j++)
	for(int k=1;k<=i-j+1;k++)
	f[i][j]=(f[i][j]+f[i-k][j-1])%mod;
	cout<<f[n][k]<<endl;
  return 0;
}

