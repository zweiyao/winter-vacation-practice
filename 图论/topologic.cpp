#include<bits/stdc++.h>
using namespace std;
#define maxv 105
int in[maxv];
struct node
{
	int v,w;
};
vector<node> Adj[maxv];
int e[maxv],l[maxv];
int ve[maxv],vl[maxv];
stack<int> topoOrder;
int n;
bool topoLogicalSort()
{
	bool flag=false;
	queue<int> q;
//	for(int i=1;i<=n;i++)cout<<in[i]<<" ";
	for(int i=1;i<=n;i++)
	{
		if(in[i]==0)
		q.push(i);
	}
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		topoOrder.push(u);
		for(int i=0;i<Adj[u].size();i++)
		{
			int v=Adj[u][i].v;
			in[v]--;
			if(in[v]==0)
			q.push(v);//更新后继
			if(ve[u]+Adj[u][i].w>ve[v])
			{
				ve[v]=ve[u]+Adj[u][i].w;
			}
		}
	}
	if(topoOrder.size()==n)flag=true;
	else flag=false;
	return flag;
}
int CriticalPath()
{
	memset(ve,0,sizeof(ve));
	if(topoLogicalSort()==false)
	{
		return -1;//不是有向无环图 
	}
	fill(vl,vl+n+1,ve[n]);
	while(!topoOrder.empty())
	{
		int u=topoOrder.top();
		topoOrder.pop();
		for(int i=0;i<Adj[u].size();i++)
		{
			int v=Adj[u][i].v;
			if(vl[v]-Adj[u][i].w<vl[u])
			vl[u]=vl[v]-Adj[u][i].w;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<Adj[i].size();j++)
		{
			int v=Adj[i][j].v;
			int e=ve[i],l=vl[v]-Adj[i][j].w;
			if(e==l)
			{
				cout<<i<<"->"<<v<<endl;
			}
		}
	}
	return ve[n];
}
int m;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		Adj[x].push_back({y,z});
		in[y]++;
	}
	CriticalPath();
	
  return 0;
}

