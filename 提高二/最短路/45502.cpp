#include<bits/stdc++.h>
using namespace std;
#define mod 100003
vector<int> g[1000005];
priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > > q;
int dis[1000005],num[1000005],vis[1000005];
void dijkstra()
{
	q.push(make_pair(0,1));
	memset(vis,0,sizeof(vis));
	memset(dis,0x3f,sizeof(dis));
	dis[1]=0;
	while(!q.empty())
	{
		int u=q.top().second;
		q.pop();
		if(vis[u])continue;
		vis[u]=1;
		for(int i=0;i<g[u].size();i++)
		{
			int v=g[u][i];
			if(dis[v]>dis[u]+1)
			{
				dis[v]=dis[u]+1;
				num[v]=num[u];
				q.push(make_pair(dis[v],v));
			}
			else if(dis[v]==dis[u]+1)
			{
				num[v]=(num[v]+num[u])%mod;
			}
		}
	}
}
int main()
{

	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		num[i]=1;
	}
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
		
	}
	dijkstra();
	for(int i=1;i<=n;i++)
	{
	  if(dis[i]==0x3f3f3f3f) cout<<0<<"\n";
		else cout<<num[i]<<"\n";
	}
	return 0;
 } 
