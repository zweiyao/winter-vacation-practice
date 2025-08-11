#include<bits/stdc++.h>
using namespace std;
int cow[30];//¼ÇÂ¼Å£µÄÎ»ÖÃ 
struct node
{
	int v,w;
	node(int _v,int _w)
	:v(_v),w(_w)
	{}
	friend bool operator<(node a,node b)
	{
		return a.w>b.w;
	}
};
vector<node> g[105];
priority_queue<node> q;
int dis[105],vis[105];
int flag[105];
int dijkstra(int s)
{
	memset(dis,0x3f,sizeof(dis));
	memset(vis,0,sizeof(vis));
	dis[s]=0;
	q.push(node(s,0));
	while(!q.empty())
	{
		int u=q.top().v;
		q.pop();
		if(vis[u]==1)continue;
		vis[u]=1;
		for(int i=0;i<g[u].size();i++)
		{
			int v=g[u][i].v;
			int w=g[u][i].w;
			if(dis[v]>dis[u]+w)
			{
				dis[v]=dis[u]+w;
				q.push(node(v,dis[v]));
			}
		}
	}
	return dis['Z'-'A'];
}
int main()
{
	int m;
	cin>>m;
	int cnt=0;
	for(int i=0;i<m;i++)
	{
		char a,b;
		int u,v,w;
		cin>>a>>b>>w;
		u=a-'A';
		v=b-'A';
		if(a>='A'&&a<'Z'&&flag[u]==0)
		{cow[cnt++]=u;
		flag[u]=1;}
		if(b>='A'&&b<'Z'&&flag[v]==0)
		{cow[cnt++]=v; 
		flag[v]=1;}
		g[u].push_back(node(v,w));
		g[v].push_back(node(u,w));
	}
	int d=0;
	int ans=INT_MAX;
	char f;
	for(int i=0;i<cnt;i++)
	{
		d=dijkstra(cow[i]);
		if(d<ans)
		{
			ans=d;
			f=char(cow[i]+'A');
		}
	}
	cout<<f<<" "<<ans;
	return 0;
}
