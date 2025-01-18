#include<bits/stdc++.h>
using namespace std;
char a[205],b[205];
int f[205][205];
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
			f[i][j]=f[i-1][j-1]+1;	
			else
			f[i][j]=max(f[i-1][j],f[i][j-1]);
		}	
	}	
	cout<<f[n][m]<<endl;
  return 0;
}

