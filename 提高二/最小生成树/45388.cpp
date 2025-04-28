#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#define int long long
using namespace std;
struct edge{
    int u,v;
    double w;
}e[1000001];
int x[1000001],y[1000001];
int fa[1000001];
int find(int x)
{
    if(fa[x]==x) return x;
    else return fa[x]=find(fa[x]);
}
signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
        fa[i]=i;
    }
    int k=0;
    for(int i=1;i<=n;i++)
    for(int j=i+1;j<=n;j++)
    {
        double len=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
        e[++k].u=i;
        e[k].v=j;
        e[k].w=len;
    }
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        int f1=find(u);
        int f2=find(v);
        fa[f1]=f2;
    }
    sort(e+1,e+k+1,[](edge a,edge b){return a.w<b.w;});
    int cnt=0;
    double ans=0;
    k=1;
    //计算有多少个连通分量
    for(int i=1;i<=n;i++)
    {
        if(fa[i]==i)cnt++;
    }
    while(cnt>1)
    {
        int u=e[k].u;
        int v=e[k].v;
        double w=e[k].w;
        int f1=find(u);
        int f2=find(v);
        if(f1==f2)
        {
            k++;
            continue;
        }
        else
        {
            fa[f1]=f2;
            ans+=w;
            cnt--;
        }
    }
    cout<<fixed<<setprecision(2)<<ans<<"\n";
}