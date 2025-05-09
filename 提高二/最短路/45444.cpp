#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
int n,m,k,a,b;
int mod(int a,int b)
{
    return (a%b+b)%b;
}
struct node{
    int v,t,w;
    node(int _v,int _t,int _w):v(_v),t(_t),w(_w){}
    friend bool operator <(node a,node b)
    {
        return a.w>b.w;
    }
};
int f[1005][1005];
vector<node> g[1005];
priority_queue<node> q;
int vis[1005][1005];
void Dijkstra(int s)
{
    memset(vis,0,sizeof(vis));
    memset(f,0x3f,sizeof(f));
    f[s][0]=0;
    q.push(node(s,0,0));
    while(!q.empty())
    {
        int u=q.top().v;
        int t=q.top().t;
        q.pop();
        if(vis[u][t])continue;
        vis[u][t]=1;
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i].v;
            int w=g[u][i].w;
            if(f[v][mod(t+w,k)]>f[u][t]+w)
            {
                f[v][mod(t+w,k)]=f[u][t]+w;
                q.push(node(v,mod(t+w,k),f[v][mod(t+w,k)]));
            }
        }
    }
}

int main()
{
    cin>>n>>m>>k>>a>>b;
    for(int i=1;i<=m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        g[x].push_back((node){y,0,w});
    }  
    Dijkstra(a);
    if(f[b][0]==0x3f3f3f3f)
    cout<<"-1\n";
    else
    cout<<f[b][0]<<"\n";
}