#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;    
int n,m,k;
int shop[1001];
int vis[10005],dis[6][10005];
struct Node{
    int v,dis;
    Node(int _v,int _dis):v(_v),dis(_dis){}
    friend bool operator <(Node a,Node b)
    {
        return a.dis>b.dis;
    }
};//dijkstra堆优化
priority_queue<Node> q;
vector<Node> g[10005];
void dijkstra(int s)
{
    memset(vis,0,sizeof(vis));
    dis[s][shop[s]]=0;
    q.push((Node){shop[s],0});
    while(!q.empty())
    {
        int u=q.top().v;
        q.pop();
        if(vis[u]) continue;
        vis[u]=1;
        for(int i=0;i<g[u].size();i++)
        {
            if(dis[s][i]>dis[s][u]+g[u][i].dis)
            {
                dis[s][i]=dis[s][u]+g[u][i].dis;
                q.push((Node){i,dis[s][i]});
            }
        }
    }
}
int f[7],a[7];
int ans=INT_MAX;
void dfs(int dep,int s)
{
    if(dep==k)
    {
        int sum=dis[a[0]][s];
        for(int i=1;i<k;i++)
        {
            sum+=dis[a[i-1]][shop[a[i]]];
        }
        sum+=dis[a[k-1]][s];
        ans=min(ans,sum);
    }
    else{
        for(int i=0;i<k;i++)
        {
            if(vis[i]==0)
            {
                vis[i]=1;
                a[dep]=i;
                dfs(dep+1,s);
                vis[i]=0;
            }
        }
    }
}
int hash_z[10001];
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<k;i++)
    {
        cin>>shop[i];
        hash_z[shop[i]]=1;
    }
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back(Node(v,w));
        g[v].push_back(Node(u,w));
    }
    memset(dis,0x3f,sizeof(dis));
    for(int i=0;i<k;i++)
    {
        dijkstra(i);
    }
    for(int i=0;i<n;i++)
    {
        if(hash_z[i]==0)
        {
            dfs(0,i);
        }
    }
    cout<<ans<<"\n";
    return 0;
}