#include<bits/stdc++.h> 
using namespace std;
int a[105],f[105][55];//f[i][j]表示用i个筷子组成k双的最小平方和 
int main()
{
	int n,k;
	cin>>n>>k;
	k+=3;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n<k*2)
	{
		cout<<-1<<endl;
		return 0;
	}
	else
	{
		sort(a+1,a+n+1);
		memset(f,0x3f,sizeof(f));
		for(int i=0;i<=n;i++)
		{
			f[i][0]=0;
		}
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<=k;j++)
			{
				f[i][j]=min(f[i-1][j],f[i-2][j-1]+(a[i]-a[i-1])*(a[i]-a[i-1]));
			}
		}
		cout<<f[n][k]<<endl;
	}
	
	return 0;
}
