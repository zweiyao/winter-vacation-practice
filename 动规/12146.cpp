#include<bits/stdc++.h>
using namespace std;
int dp[45][4105];
int main()
{
	memset(dp,0x88,sizeof dp);
	dp[0][0]=0;
	int n,sum=0;
	cin >>n;
	for(int i=1;i<=n;i++){
		int m;
		cin >> m;
		sum+=m;
		for(int j=0;j<=sum;j++){
			dp[i][j]=dp[i-1][j];
			if(j>=m)dp[i][j]=max(dp[i][j],dp[i-1][j-m]+m);
			else dp[i][j]=max(dp[i][j],dp[i-1][m-j]+m);
			dp[i][j]=max(dp[i][j],dp[i-1][j+m]+m);
		}
	}
	cout << dp[n][0]/2;
  return 0;
}

