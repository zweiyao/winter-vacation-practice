#include<iostream>
using namespace std;
int fa[50005],d[50005];
int mod(int a,int b)
{
    return (a%b+b)%b;
}
int find(int x)
{
    if(fa[x]==x)
        return x;
    int fn=find(fa[x]);
    d[x]=(d[x]+d[fa[x]])%3;
    return fa[x]=fn;
}
void merge(int x,int y,int t)
{
    int fx=find(x);
    int fy=find(y);
    fa[fx]=fy;
    d[fx]=mod(d[y]-d[x]+t,3);
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)fa[i]=i;
    int ans=0;
    while(k--)
    {
        int D,x,y;
        cin>>D>>x>>y;
        if(x>n||y>n)
        {
            ans++;
            continue;
        }
        int fx=find(x);
        int fy=find(y);
        if(D==1)
        {
            if(fx==fy)
            {
                if(mod(d[x],3)!=mod(d[y],3))
                {
                    ans++;
                }
            }
            else
            {
                merge(x,y,0);
            }
        }
        else{
            if(x==y)
            {
                ans++;
                continue;
            }
            else{
                if(fx==fy)
                {
                    if(mod(d[x]-d[y],3)!=1)
                    {
                        ans++;
                    }
                }
                else
                {
                    merge(x,y,1);
                }
            }
        }
    }
    cout<<ans<<endl;
}