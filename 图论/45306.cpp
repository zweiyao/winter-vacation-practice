#include<bits/stdc++.h>
using namespace std;
vector<int> a[105];
int vis[105],ret[105];
int n;
int cnt=0;
void dfs(int u)
{
	cnt++;
	vis[u]=cnt;
	for(int i=0;i<a[u].size();i++)
	{
		int v=a[u][i];
		if(!vis[v])
		{
			dfs(v);	
		}	
	}
	cnt++;
	ret[u]=cnt;
}
int main()
{
	cin>>n;
	int u,k,v;
	for(int i=1;i<=n;i++)
	{
		cin>>u>>k;
		while(k--)
		{
			cin>>v;
			a[u].push_back(v);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])dfs(i);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" "<<vis[i]<<" "<<ret[i]<<endl;
	}
  return 0;
}

