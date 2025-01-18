#include<bits/stdc++.h>
using namespace std;
char a[2005],b[2005];
int f[2005][2005];
int main()
{
	scanf("%s %s",a+1,b+1);//从1号位置开始用这种方法 
	int n=strlen(a+1);
	int m=strlen(b+1);
	int k;
	cin>>k;
	for(int i=0;i<=n;i++)
	{
		f[i][0]=i*k;
	}
	for(int j=0;j<=m;j++)
	{
		f[0][j]=j*k;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			f[i][j]=min(f[i-1][j]+k,f[i][j-1]+k);
			f[i][j]=min(f[i][j],f[i-1][j-1]+abs(a[i]-b[j]));
		}
	}
	cout<<f[n][m]<<endl;
  return 0;
}


