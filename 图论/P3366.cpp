#include<bits/stdc++.h>
#define MAXV 5005
using namespace std;
int n,m;
struct node{
	int v,dis;
	node(int _v,int _dis)
	:v(_v),
	dis(_dis)
	{}
	friend bool operator < (node a,node b)
	{
		return a.dis>b.dis;
	}
};
vector<node> v[5005];
int dis[MAXV];
priority_queue<node> q;
int vis[MAXV];
int tot=0;
int ans=0;
void prim()
{
	for(int i=0;i<=n;i++)
	{
		dis[i]=2147483647;
	}
	dis[1]=0;
	q.push(node(1,0));
	while(!q.empty())
	{
		int u=q.top().v;
		int len=q.top().dis;
		q.pop();
		if(vis[u])continue;
		tot++;
		ans+=len;
		vis[u]=true;
		//¸üÐÂdis±í 
		for(int i=0;i<v[u].size();i++)
		{
			int x=v[u][i].v;
			if(vis[x]==false&&dis[x]>v[u][i].dis)
			{
				dis[x]=v[u][i].dis;
				q.push(node(x,dis[x]));
			}
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		v[x].push_back(node(y,z));
		v[y].push_back(node(x,z));
	}
	prim();
	if(tot<n)
	{
		cout<<"orz"<<endl;
		return 0;
	}
	else
		cout<<ans<<endl;
  return 0;
}

