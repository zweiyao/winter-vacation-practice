#include<bits/stdc++.h>
using namespace std;
long long f[105][105];
int main()
{
	memset(f,0,sizeof(f));
	int n,k;
	f[0][0]=1;//最终全分配完算一次
	//还有剩余就不算 
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=k;j++)
	for(int t=1;t<=i-j+1;t++)//最后一位同学拿t个糖果 
		{	
			f[i][j]+=f[i-t][j-1];
			f[i][j]=f[i][j]%1000000007;
		}
	cout<<f[n][k]<<endl;
	return 0;
}
