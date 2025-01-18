#include<bits/stdc++.h>
using namespace std;
int t[105],m[105];
int f[105][1050];
int main()
{
	int T,M;
	cin>>T>>M;
	for(int i=1;i<=M;i++)
	{
		cin>>t[i]>>m[i];
	}
	memset(f,0,sizeof(f));
	for(int i=1;i<=M;i++)
	{
		for(int j=1;j<=T;j++)
		{
			if(t[i]>j)
			f[i][j]=f[i-1][j];
			else
			f[i][j]=max(f[i-1][j],f[i-1][j-t[i]]+m[i]);
		}
	}
	cout<<f[M][T]<<endl;
	
  return 0;
}

