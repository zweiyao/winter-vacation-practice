#include<iostream>
using namespace std;
int fa[1000005];
int find(int x)
{
    if(fa[x]==x)return x;
    else return fa[x]=find(fa[x]);
}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    {
        int num=(i-1)*n+j;
        fa[num]=num;
    }
    int x1,y1,x2,y2;
    while(cin>>x1)
    {
        cin>>y1>>x2>>y2;
        int a=(x1-1)*n+y1;
        int b=(x2-1)*n+y2;
        int f1=find(a);
        int f2=find(b);
        if(f1!=f2)fa[f1]=f2;
    }
    //枚举每条向下的边
    int ans=0;
    for(int i=1;i<m;i++)
    for(int j=1;j<=n;j++)
    {
        int a=(i-1)*n+j;
        int b=a+n;
        int f1=find(a);
        int f2=find(b);
        if(f1!=f2)
        {
            fa[f1]=f2;
            ans++;
        }
    }
    //枚举每条横向边
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<n;j++)
        {
            int a=(i-1)*n+j;
            int b=a+1;
            int f1=find(a);
            int f2=find(b);
            if(f1!=f2)
            {
                fa[f1]=f2;
                ans+=2;

            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}