#include<bits/stdc++.h>
using namespace std;
int a[105],s[105];
int f[105][105];
int main()
{
	int n;
	cin>>n;
	int ans=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++)
	{
		swap(a[i],a[i+1]);
		//求前缀和 
		for(int j=1;j<=n;j++)
		{
			s[j]=s[j-1]+a[j]; 
			f[j][j]=0; 
		}
		for(int len=2;len<=n;len++)
		{
			for(int left=1;left<=n-len+1;left++)//左端点
			{
				int right=left+len-1;
				f[left][right]=INT_MAX;
				for(int k=left;k<=right-1;k++)
				{
					f[left][right]=min(f[left][right],f[left][k]+f[k+1][right]+s[right]-s[left-1]);
				}
			}
		}
		ans=min(ans,f[1][n]);
		swap(a[i],a[i+1]);
	}
	cout<<ans<<endl;
  return 0;
}

