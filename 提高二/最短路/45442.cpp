#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int n,m;
struct Node{
    int v,dis;
    Node(int _v,int _dis):v(_v),dis(_dis){}
    friend bool operator <(Node a,Node b)
    {
        return a.dis>b.dis;
    }
};//dijkstra堆优化
struct edge{
    int u,v,w;
}e[1000001];
int g[1001][1001];
priority_queue<Node> q;
int vis[1001];
int dis[1001];
void dijkstra(int s)
{
    memset(vis,0,sizeof(vis));
    memset(dis,0x3f,sizeof(dis));//可能不够大
    dis[s]=0;
    q.push((Node){s,0});
    while(!q.empty())
    {
        int u=q.top().v;
        q.pop();
        if(vis[u]) continue;
        vis[u]=1;
        for(int i=1;i<=n;i++)
        {
            if(g[u][i]!=-1&&dis[i]>dis[u]+g[u][i])
            {
                dis[i]=dis[u]+g[u][i];
                q.push((Node){i,dis[i]});
            }
        }
    }

}
int main()
{
    int ans=0x3f3f3f3f;
    cin>>n>>m;
    memset(g,-1,sizeof(g));
    for(int i=1;i<=n;i++)
        g[i][i]=0;
    for(int i=1;i<=m;i++)
    {
        cin>>e[i].u>>e[i].v>>e[i].w;
        g[e[i].u][e[i].v]=e[i].w;
        g[e[i].v][e[i].u]=e[i].w;
    }
    //删一条边dijkstra一次
    for(int i=1;i<=m;i++)
    {
        int u=e[i].u,v=e[i].v,w=e[i].w;
        g[u][v]=-1;
        g[v][u]=-1;
        dijkstra(u);
        g[u][v]=w;
        g[v][u]=w;
        ans=min(ans,dis[v]+w);
    }
    cout<<ans<<endl;
    return 0;
}