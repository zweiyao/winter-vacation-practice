#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[100005];//邻接表 
int u[100005];
void dfs(int x,int t)//t代表起点 
{
	if(u[x]<t)
	u[x]=t;
	for(int i=0;i<v[x].size();i++)
	{
		if(u[v[x][i]]==0)
		dfs(v[x][i],t);
	}
}
int main()
{
	cin>>n>>m;
	int x,y;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		v[y].push_back(x);//反着来读入 
	}
	for(int i=n;i>=1;i--)
	{
		dfs(i,i);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<u[i]<<" ";
	}
  return 0;
}

