#include<bits/stdc++.h>
using namespace std;
char a[25],b[25];
int f[25][25];
int main()
{
	scanf("%s %s",a+1,b+1);//从1号位置开始用这种方法 
	int n=strlen(a+1);
	int m=strlen(b+1);
	b[0]='*';//避免*代表0字符，和b[0]匹配 
	memset(f,0,sizeof(f));
	f[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(a[i]==b[j])
			{
				if(a[i]=='*')
				f[i][j]=f[i-1][0];
				//看前面能否完全匹配
				else
				f[i][j]=f[i-1][j-1];
			}
			else
			{
				if(a[i]=='?')
				f[i][j]=f[i-1][j-1];
				else if(a[i]=='*')
				{
					f[i][j]=max(f[i-1][j],f[i][j-1]);
				}
				else
				f[i][j]=0; 
			}
		}
	}
	if(f[n][m]==1)
	{
		cout<<"matched"<<endl;
	}
	else
	{
		cout<<"not matched"<<endl; 
	}
  return 0;
}


