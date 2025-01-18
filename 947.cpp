#include<bits/stdc++.h>
using namespace std;
int a[105],b[105],c[105];
int f[105][100005];
int main()
{
	int tot,n;
	int ans=0;
	cin>>tot>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	for(int i=1;i<=n;i++)	
		cin>>c[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			if(b[j]*c[j+1]<c[j]*b[j+1])
			{
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
				swap(c[j],c[j+1]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		ans=0;
		for(int j=0;j<=tot;j++)
		{
			if(j<c[i])
			f[i][j]=f[i-1][j];
			else
			{
				f[i][j]=max(f[i-1][j],f[i-1][j-c[i]]+a[i]-b[i]*j);
				ans=max(ans,f[i][j]);
			}
		}
	}
	cout<<ans<<endl;
  	return 0;
}

