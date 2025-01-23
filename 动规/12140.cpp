#include<iostream>
#include<algorithm>
using namespace std;
int dp[101][11];

int main(){
	int n,m;
	int t;
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cin>>n>>m;
		for(int i=1;i<=n;++i)
			for(int j=1;j<=m;++j)
				dp[i][j]=i;
		for(int i=1;i<=n;++i) 	
			for(int k=2;k<=m;++k)
				for(int j=1;j<=i;++j)
					dp[i][k]=min(dp[i][k],1+max(dp[j-1][k-1],dp[i-j][k]));
		cout<<dp[n][m]<<endl;
	}
	return 0;		
}

