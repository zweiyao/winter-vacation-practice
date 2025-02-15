#include<iostream>
using namespace std;
int n,m,p;
int fa[5005];//²¢²é¼¯
size_t find(int x)
{
    while(fa[x]!=x){
        x=fa[x];
    }
    return x;
}
void join(int x,int y)
{
    int f1=find(x),f2=find(y);
    if(f1==f2)
        return ;
    else
        fa[f1]=f2;
}
int main()
{
    int x,y;
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++)
        {
            fa[i]=i;
        }
    for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            join(x,y);
        }
    for(int i=1;i<=p;i++)
        {
            cin>>x>>y;
            if(find(x)==find(y))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    return 0;
}

