#include<bits/stdc++.h>
#define MAXV 505
using namespace std;
struct edge{
	int u,v,dis;
}e[250005];
int A,B;
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
int ans=0;
int tot=0;
int cnt=0;
void Kruskal(){
	for(int i=0;i<cnt;i++)
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
	cin>>A>>B;
	for(int i=0;i<=B;i++)
	{
		fa[i]=i;
	}
	for(int i=1;i<=B;i++)
	{
		for(int j=1;j<=B;j++)
		{
			int price;
			cin>>price;
			if(i==j){
				e[cnt].u=0;e[cnt].v=i;e[cnt++].dis=A;
				continue;
			}
			if(price==0)
			{
				e[cnt].u=i;e[cnt].v=j;e[cnt++].dis=A;
			}
			else
			{
				e[cnt].u=i;e[cnt].v=j;e[cnt++].dis=price;
			}
		}
	 } 
	 sort(e,e+cnt,cmp);
	 Kruskal();
	 cout<<ans<<endl;
  return 0;
}

