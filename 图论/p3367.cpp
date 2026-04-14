#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int fa[200005];
int find(int x)
{
	if(x!=fa[x])return fa[x]=find(fa[x]);
	return x;
}
void join(int x,int y)
{
    int f1=find(x);
    int f2=find(y);
    if(f1==f2)return ;
    else
        fa[f1]=f2;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
    }
    for(int i=1;i<=m;i++)
    {
        int z,x,y;
        cin>>z>>x>>y;
        if(z==1)
        {
            join(x,y);
        }
        if(z==2)
        {
            int f1=find(x);
            int f2=find(y);
            if(f1==f2) cout<<"Y"<<endl;
            else cout<<"N"<<endl;
        }
    }
    return 0;
}