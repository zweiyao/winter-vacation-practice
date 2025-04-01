#include<bits/stdc++.h>
using namespace std;
char ch[15][15];
int main()
{
	int m,n,k;
	cin>>m>>n>>k;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>ch[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int t=1;t<=k;t++)
		{
			for(int j=1;j<=n;j++)
			{
				for(int z=1;z<=k;z++)
				{
					cout<<ch[i][j];
				}
			}
			cout<<endl;
		}
	}
  return 0;
}

