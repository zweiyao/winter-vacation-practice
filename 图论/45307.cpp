#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a[105];
int vis[105];
queue<int> q;
int main()
{
	memset(vis,-1,sizeof(vis));
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
	q.push(1);
	vis[1]=0;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int i=0;i<a[u].size();i++)
		{
			int v=a[u][i];
			if(vis[v]==-1)
			{
				q.push(v);
				vis[v]=vis[u]+1;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" "<<vis[i]<<endl; 
	}
  return 0;
}

