#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define MAXV 105
const int INF=1000000000;
struct Node{
	int v,dis;//v为目标顶点，dis边权 
};
vector<Node> Adj[MAXV];
int n,m;
int d[MAXV];//最短路径长度
int pre[MAXV]; 
int num[MAXV];//最短路的数量 
bool vis[MAXV]={false};

void Dijkstra(int s)
{
	for(int i=0;i<n;i++)
	{
		num[i]=1;
	}
	memset(d,0x3f,sizeof(d));
	d[s]=0;
	for(int i=0;i<n;i++)
	{
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++)
		{
			if(vis[j]==false&&d[j]<MIN)
			{
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1)return;//全访问完了 
		vis[u]=true;//访问u
		for(int j=0;j<Adj[u].size();j++)
		{
			int v=Adj[u][j].v;
			if(vis[v]==false && d[u]+Adj[u][j].dis<d[v])
			{
				d[v]=d[u]+Adj[u][j].dis;//维护d[]数组 
				pre[v]=u;
				num[v]=num[u];
			}
			else if(vis[v]==false && d[u]+Adj[u][j].dis==d[v])
			{
				num[v]+=num[u];
			}
		 } 	
	}
}

void dfs(int s,int v)//求最短路径
{
	if(v==s)
	{
		cout<<s<<"->";
		return ;
	}
	dfs(s,pre[v]);
	cout<<v<<"->";
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
	for(int i=0;i<n;i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;
	for(int i=1;i<n;i++)
	{
	    dfs(s,i);
	    cout<<endl;
	}
  return 0;
}

