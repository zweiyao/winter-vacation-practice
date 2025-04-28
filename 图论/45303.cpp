#include<bits/stdc++.h>
using namespace std;
int p,c,n;
vector<int> a[30005];
int vis[30005];
int cnt=0;
void dfs(int u)
{
	cnt++;
	vis[u]=1;
	for(int i=0;i<a[u].size();i++)
	{
		int v=a[u][i];
		if(vis[v]==0)
		dfs(v);
	}
}
int main()
{
	cin>>p>>c>>n;
	for(int i=1;i<=c;i++)
	{
		int u,v;
		cin>>u>>v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		//Ô¤´¦Àí
		int u,v;
		cin>>u;
		vis[u]=-1;
		for(int j=0;j<a[u].size();j++)
		{
			int v=a[u][j];
			vis[v]=-1;
		}
	}
	dfs(1);
	cout<<p-cnt<<endl;
  return 0;
}

