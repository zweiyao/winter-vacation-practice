#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct edge{
    int u,v,w;
}e[20005];
int fa[2005];
int find(int x)
{
    if(fa[x]==x)return x;
    else return fa[x]=find(fa[x]);
}
vector<int> ret;
int main()
{
    int n,p;
    cin>>n>>p;
    for(int i=1;i<=p;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        e[i].u=u;
        e[i].v=v;   
        e[i].w=w;
    }
    sort(e+1,e+p+1,[](edge a,edge b){return a.w<b.w;});
    int ans=0;
    int cnt=0;
    int flag=0;
    int secmin=2e9;
    for(int i=1;i<=n;i++)fa[i]=i;
    //求最小生成树
    for(int i=1;i<=p;i++)
    {
        int u=e[i].u,v=e[i].v;
        int w=e[i].w;
        int f1=find(u),f2=find(v);
        if(f1!=f2)
        {
            cnt++;
            ans+=w;
            fa[f1]=f2;
            ret.push_back(i);
        }
        if(cnt==n-1)
        {
            flag=1;
            break;
        }
    }
    for(int t=0;t<ret.size();t++)
    {
        flag=0;
        ans=0;
        cnt=0;
        for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=p;i++)
    {
        if(i==ret[t])continue;
        int u=e[i].u,v=e[i].v;
        int w=e[i].w;
        int f1=find(u),f2=find(v);
        if(f1!=f2)
        {
            cnt++;
            ans+=w;
            fa[f1]=f2;
        }
        if(cnt==n-1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)secmin=min(secmin,ans);
    }
    cout<<secmin<<"\n";
    return 0;
}