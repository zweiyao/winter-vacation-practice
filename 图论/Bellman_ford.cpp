#include<bits/stdc++.h>
using namespace std;
#define maxv 500
struct Node{
	int v,dis;
};
vector<Node> Adj[maxv];
const int INF=0x3fffffff;
int n,m,k;
int d[maxv];
int num[maxv];//记录经过几条边 
bool Bellman(int s)
{
	fill(d,d+maxv,INF);
	d[s]=0;
	for(int i=0;i<n-1;i++)//没有负环n-1次d就收敛了
	{
		for(int u=1;u<=n;u++)
		{
			if(num[u]>=k)continue;
			for(int j=0;j<Adj[u].size();j++)
			{
				int v=Adj[u][j].v;
				int dis=Adj[u][j].dis;
				if(d[u]+dis<d[v])
				{
					d[v]=d[u]+dis;
					num[v]=num[u]+1;
				}
			}
		}
	 } 
	 for(int u=1;u<=n;u++)
	 {
	 	for(int j=0;j<Adj[u].size();j++)
			{
				int v=Adj[u][j].v;
				int dis=Adj[u][j].dis;
				if(d[u]+dis<d[v])
				{
					return false;
				}
			}
	 }
	 return true;
}
int main()
{
	cin>>n>>m>>k;
	struct Node tmp={0,0};
	for(int i=1;i<=m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		tmp.v=y;
		tmp.dis=z;
		Adj[x].push_back(tmp);
	}
	Bellman(1);
	cout<<d[n]<<endl;
  return 0;
}

