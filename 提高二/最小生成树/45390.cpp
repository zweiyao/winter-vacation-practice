#include<iostream>
#include<algorithm>
using namespace std;
int f[105][105];
int n;
struct edge{
    int u,v,w;
}e[10005];
int fa[105];
int find(int x)
{
    if(fa[x]==x)return x;
    return fa[x]=find(fa[x]);
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {   fa[i]=i;
        for(int j=1;j<=n;j++)
        {
            cin>>f[i][j];
        }
    }
    int k=0;
    for(int i=1;i<n;i++)
    for(int j=i+1;j<=n;j++)
    {
        e[++k].u=i;
        e[k].v=j;
        e[k].w=f[i][j];
    }
    sort(e+1,e+k+1,[](edge a,edge b){return a.w<b.w;});
    int ans=0;
    for(int i=1;i<=k;i++)
    {
        int x=e[i].u,y=e[i].v;
        int f1=find(x),f2=find(y);
        if(f1!=f2)
        {
            ans+=e[i].w;
            fa[f1]=f2;
        }
        else
        {
            continue;
        }
    }
    cout<<ans<<endl;
    return 0;
}