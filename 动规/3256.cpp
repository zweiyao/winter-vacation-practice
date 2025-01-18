#include<bits/stdc++.h>
using namespace std;
int a[20];
long long f[20][20];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
		f[i][0]=a[i];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i-1;j++)
		{
			for(int t=1;t<=i-1;t++)
			{
				if(j<=t)
					f[i][j]=max(f[i][j],f[t][j-1]*(a[i]-a[t]));
			}
		}
	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=k;j++)
//		{
//			cout<<f[i][j]<<" ";
//		 } 
//		 cout<<endl;
//	 } 
	cout<<f[n][k]<<endl;
  	return 0;
}

