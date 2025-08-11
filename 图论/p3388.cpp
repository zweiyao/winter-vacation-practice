#include<bits/stdc++.h>
using namespace std;
vector<int> g[20005];
int dfn[20005],low[20005],vis[20005],flg[20005];
int cnt=0;
void tarjan(int x,int fa)
{
    vis[x]=1;
    low[x]=dfn[x]=++cnt;
    int child=0;
    for(int i=0;i<g[x].size();i++)
    {
        int y=g[x][i];
        if(!vis[y])
        {
            child++;
            tarjan(y,x);
            low[x]=min(low[x],low[y]);
            if((fa!=x && low[y] >= dfn[x])||(fa==x && child>=2))
                flg[x]=1;
        }
        else if(y!=fa)
            low[x]=min(low[x],dfn[y]);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    //不一定联通的情况
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        tarjan(i,i);
    }
    cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(flg[i]==1)cnt++;
    }
    cout<<cnt<<"\n";
    for(int i=1;i<=n;i++)
    {
        if(flg[i]==1)cout<<i<<" ";
    }
    return 0;
}
