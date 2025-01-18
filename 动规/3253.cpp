#include<bits/stdc++.h>
using namespace std;
int a[2005];
int f[2005][2005];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		f[i][i]=a[i]*n;
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=i+1;j<=n;j++)
		{
			f[i][j]=max(f[i+1][j]+a[i]*(n-j+i),f[i][j-1]+a[j]*(n-j+i));
		}
	}
	cout<<f[1][n]<<endl;
  return 0;
}

