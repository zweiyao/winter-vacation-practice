#include<iostream>
#include<algorithm>
using namespace std;
const int N=1e4+5;
int c[N];
struct edge
{
    int u,v,w;
}e[100005];
int fa[N];
int find(int x)
{
    if(fa[x]==x) return x;
    return fa[x]=find(fa[x]);
}
int main()
{
    int n,p;
    cin>>n>>p;
    int minn=0;
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
        minn=min(minn,c[i]);
        fa[i]=i;
    }
    for(int i=1;i<=p;i++)
    {
        int w;
        cin>>e[i].u>>e[i].v>>w;
        //边权不再是那么简单哈哈😄
        e[i].w=c[e[i].u]+c[e[i].v]+2*w;
    }
    sort(e+1,e+p+1,[](edge a,edge b){return a.w<b.w;});
    int ans=0;
    for(int i=1;i<=p;i++)
    {
        int u=e[i].u,v=e[i].v;
        int fu=find(u),fv=find(v);
        if(fu==fv) continue;
        fa[fu]=fv;
        ans+=e[i].w;
    }
    //从点权最小的点出发
    cout<<ans+minn<<endl;
    return 0;
}