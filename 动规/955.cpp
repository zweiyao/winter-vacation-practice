#include<bits/stdc++.h>
using namespace std;
int a[205];
int f[205][205];
int main()
{
	int n;
	cin>>n;
	int j=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[n+i]=a[i];
	}
	memset(f,0,sizeof(f)); 
	for(int len=2;len<=n;len++)
	{
		for(int i=1;i<=2*n-len;i++)//环的话2n位不用管 
		{
			int j=i+len-1;
			for(int k=i;k<=j-1;k++)
			{
				f[i][j]=max(f[i][j],f[i][k]+f[k+1][j]+a[i]*a[k+1]*a[j+1]);
			}
		}
	}
	int ret=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		ret=max(ret,f[i][n+i-1]);
	}
	cout<<ret<<endl;
  return 0;
}

