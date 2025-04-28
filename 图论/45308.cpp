#include<bits/stdc++.h>
using namespace std;
int k,n,m;
int x[105];
vector<int> a[1005];
void dfs(int u)
{
	
}
int main()
{
	cin>>k>>n>>m;
	for(int i=1;i<=k;i++)
	{
		cin>>x[i];
	}
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		a[u].push_back(v);
	}
	for(int i=1;i<=k;i++)
	{
		memset(vis[])
		dfs(x[i]);
	}
  return 0;
}

