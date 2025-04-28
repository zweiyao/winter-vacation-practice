#include<iostream>
#include<algorithm>
using namespace std;
const int N=105;
struct edge{
    int u,v,w;
}e[10505];
int fa[N];
int find(int x)
{
    if(fa[x]==x)return x;
    else return fa[x]=find(fa[x]);
}   
int n,m;
int minn=2e9;
int maxn=0;
int cnt=0;
int ans=2e9;
int flag1=0,flag2=0;
void init()
{
    minn=2e9;
    maxn=0;
    cnt=0;
    flag1=0;
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
    }
}
int main()
{
 
    while(cin>>n>>m)
    {
        ans=2e9;
        flag2=0;
        if(n==0&&m==0)
            break;
        else{
            for(int i=1;i<=m;i++)
            {
                int u,v,w;
                cin>>u>>v>>w;
                e[i].u=u;
                e[i].v=v;
                e[i].w=w;
            }
            sort(e+1,e+m+1,[](edge a,edge b){return a.w<b.w;});
            //确定i-m边中做最小生成树
            for(int i=1;i<=m-n+2;i++)
            {
                init();
                //Kruskal
                for(int j=i;j<=m;j++)
                {
                    int u=e[j].u;
                    int v=e[j].v;
                    int w=e[j].w;
                    int f1=find(u);
                    int f2=find(v);
                    if(f1!=f2)
                    {
                        fa[f1]=f2;
                        cnt++;
                        if(cnt==1)
                        minn=w;
                        if(cnt==n-1)
                        {
                            maxn=w;
                            flag1=1;
                            flag2=1;
                            break;
                        }
                    }
                }
                if(flag1==1)
                ans=min(ans,maxn-minn);
            }
            if(flag2==1)
            cout<<ans<<"\n";
            else cout<<"-1"<<"\n";
        }
    }
    return 0;
}