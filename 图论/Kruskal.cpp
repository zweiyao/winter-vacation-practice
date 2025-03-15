#include<bits/stdc++.h>
#define MAXV 5005
using namespace std;
struct edge{
	int u,v,dis;
}e[10005];
int n,m;
int fa[MAXV];
int find(int x)
{
	if(x!=fa[x])return fa[x]=find(fa[x]);
	return x;
}
bool cmp(edge a,edge b)
{
	return a.dis<b.dis;
}
int tot=0;
int ans=0;
void Kruskal(){
	for(int i=1;i<=m;i++)
	{
		int u=find(e[i].u);
		int v=find(e[i].v);
		if(u==v)continue;
		ans+=e[i].dis;
		tot++;
		fa[v]=u;
	}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		fa[i]=i;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>e[i].u>>e[i].v>>e[i].dis;
	 } 
	 sort(e+1,e+m+1,cmp);
	 Kruskal();
	 if(tot<n-1)
	 cout<<"orz"<<endl;
	 else
	 cout<<ans<<endl;
  return 0;
}

