#include<bits/stdc++.h>
using namespace std;
int n,m;
struct Node
{
	int v,w;
	Node(int _v,int _w)
	:v(_v),w(_w)
	{}
	friend bool operator <(Node a,Node b)
	{
		return a.w>b.w;
	}	
};
int vis[105];
int dis[105][105];
long long num[105][105];
long long num_s[105][105][105];
priority_queue<Node> q;
vector<Node> g[105];
void dijkstra(int s)
{
    memset(vis,0,sizeof(vis));
    dis[s][s]=0;
    q.push((Node){s,0});
    while(!q.empty())
    {
        int u=q.top().v;
        q.pop();
        if(vis[u]) continue;
        vis[u]=1;
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i].v;
            if(dis[s][v]>=dis[s][u]+g[u][i].w)
            {
            	if(dis[s][v]>dis[s][u]+g[u][i].w)
                {
					dis[s][v]=dis[s][u]+g[u][i].w;
                	q.push((Node){v,dis[s][v]});
                	num[s][v]=1;
//                	num_s[s][v][u]=1;
            	}
            	else
            	{
            		num[s][v]+=num[s][u];
				}
            }
        }
    }
}
int main()
{
	memset(dis,0x3f,sizeof(dis));
	memset(num,0,sizeof(num));
	memset(num_s,0,sizeof(num_s));

	cin>>n>>m;
//	for(int i=1;i<=n;i++)
//	{
//		num_s[i][i][i]=1;
//	}
	for(int i=1;i<=m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		g[u].push_back(Node(v,w));
		g[v].push_back(Node(u,w));
	}
	for(int i=1;i<=n;i++)
		dijkstra(i);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<num[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
 } 
