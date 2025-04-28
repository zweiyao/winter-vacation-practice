#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=20005;
long long fa[N],num[N];
struct edge{
    int u,v,w;
}e[N];
int find(int x){
    if(fa[x]==x)
        return x;
    else
        return fa[x]=find(fa[x]);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(fa,0,sizeof(fa));
        memset(num,0,sizeof(num));
        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            fa[i]=i;
            num[i]=1;
        }
        for(int i=1;i<n;i++)
        {
            int a,b,w;
            cin>>e[i].u>>e[i].v>>e[i].w;
        }
        sort(e+1,e+n,[](edge a,edge b){return a.w<b.w;});
        for(int i=1;i<=n-1;i++)
        {
            int a=e[i].u,b=e[i].v,w=e[i].w;
            int f1=find(a);
            int f2=find(b);
            ans+=num[f1]*num[f2]*(w+1)-1;
            num[f2]+=num[f1];
            num[f1]=0;
            fa[f1]=f2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}