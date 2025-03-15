#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
#define MAXV 100005
const int INF=2147483647;
struct Node{
	int v,dis;//v为目标顶点，dis边权 
	friend bool operator < (Node a,Node b)
	{
		return a.dis>b.dis;
	}
};
priority_queue<Node> q;
vector<Node> Adj[MAXV];
int n,m;
int d[MAXV];//最短路径长度


bool vis[MAXV]={false};

void Dijkstra(int s)
{
	for(int i=0;i<=n;i++)
	d[i]=INF;
	d[s]=0;
	Node tmp={s,0};
	q.push(tmp);
	while(!q.empty())
	{
		int u=q.top().v;
		q.pop();
		if(vis[u])continue;
		vis[u]=true;
		for(int j=0;j<Adj[u].size();j++)
		{
			int v=Adj[u][j].v;
			if(vis[v]==false && (long long)d[u]+Adj[u][j].dis<d[v])
			{
				d[v]=d[u]+Adj[u][j].dis;//维护d[]数组
				tmp.v=v;
				tmp.dis=d[v]; 
				q.push(tmp);
			}
		 } 	
	}
}

int main()
{
	int s;//起点 
	cin>>n>>m>>s;
	for(int i=0;i<m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		struct Node n={y,z};
		Adj[x].push_back(n);
	}
	Dijkstra(s);
	for(int i=1;i<=n;i++)
	{
	    cout<<d[i]<<" ";
	}
	cout<<endl;
  return 0;
}

