#include<bits/stdc++.h>
using namespace std;
char a[1005];
int f[1005][1005];
int main()
{
	scanf("%s",a+1);
	int n=strlen(a+1);
	for(int i=1;i<=n;i++)
	{
		f[i][i]=1;
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]==a[j])
			f[i][j]=f[i+1][j-1]+2;
			else
			f[i][j]=max(f[i+1][j],f[i][j-1]);
		}
	}
	cout<<f[1][n]<<endl;
  return 0;
}

