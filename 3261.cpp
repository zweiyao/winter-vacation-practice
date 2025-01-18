#include<bits/stdc++.h>
using namespace std;
char a[55],b[55];
int f[55][55];
int main()
{
	scanf("%s %s",a+1,b+1);//从1号位置开始用这种方法 
	int n=strlen(a+1);
	int m=strlen(b+1);
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i]==b[j])
			f[i][j]=f[i-1][j-1]+2;
			else
			{//加横线 
				for(int t=1;t<i;t++)
				f[i][j]=max(f[t][j]-1,f[i][j]);
				for(int t=1;t<j;t++)
				f[i][j]=max(f[i][t]-1,f[i][j]);
			}
			f[i][j]=max(f[i-1][j-1],f[i][j]);
		}
	}
	cout<<f[n][m]<<endl;
  	return 0;
}


