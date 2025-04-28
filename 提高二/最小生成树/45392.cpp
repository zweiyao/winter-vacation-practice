#include<iostream>
#include<algorithm>
using namespace std;
struct edge{
    int u,v,w;
}e[90500];
int fa[305];
int f[305][305];
int find(int x)
{
    if(fa[x]==x)return x;
    else return fa[x]=find(fa[x]);
}
int main()
{
    int n;
    cin>>n;
    //增加0这个点作为地下水井
    int k=0;
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
        int w;
        cin>>w;
        e[++k].u=0;
        e[k].v=i;
        e[k].w=w;
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
        cin>>f[i][j];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
                e[++k].u=i;
                e[k].v=j;
                e[k].w=f[i][j];
        }
    }
    sort(e+1,e+k+1,[](edge a,edge b){return a.w<b.w;});
    int ans=0;
    for(int i=1;i<=k;i++)
    {
        int u=e[i].u,v=e[i].v;
        int w=e[i].w;
        int f1=find(u),f2=find(v);
        if(f1!=f2)
        {
            ans+=w;
            fa[f1]=f2;
        }
    }
    cout<<ans<<"\n";
    return 0;
}