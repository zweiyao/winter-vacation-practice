#include<bits/stdc++.h>
using namespace std;
vector<int> g[10005];
int x[100005],y[100005];
int vis[10005];
void dfs(int u)
{
	vis[u]=1;
	for(int i=0;i<g[u].size();i++)
	{
		int v=g[u][i];
		if(vis[v]==0)
			dfs(v);
	}
}
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)break;
		int flag=0;
		for(int i=0;i<=n;i++)g[i].clear();
		for(int i=1;i<=m;i++)
		{
			cin>>x[i]>>y[i];
			g[x[i]].push_back(y[i]);
		}
		memset(vis,0,sizeof(vis));
		dfs(1);
		for(int i=1;i<=n;i++)
		{
			if(vis[i]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"No\n";
			continue;
		}
		memset(vis,0,sizeof(vis));
		for(int i=0;i<=n;i++)g[i].clear();
		for(int i=1;i<=m;i++)
		{
			g[y[i]].push_back(x[i]);
		}
		dfs(1);
		for(int i=1;i<=n;i++)
		{
			if(vis[i]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"No\n";
			continue;
		}
		cout<<"Yes"<<"\n";
	}
	return 0;
}
