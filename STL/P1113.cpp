#include<bits/stdc++.h>
using namespace std;
int n;
int t[10005];
vector<int> linker[10005];
int vis[10005];
int dfs(int x)
{
	if(vis[x])return vis[x];
	for(int i=0;i<linker[x].size();i++)//遍历前驱
	{
		vis[x]=max(vis[x],dfs(linker[x][i]));
	} 
	vis[x]+=t[x];
	return vis[x];
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x,len,q;
		cin>>x>>len;
		t[i]=len;
		while(cin>>q)
		{
			if(q==0)
			break;
			else
			linker[i].push_back(q);//反着连 
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,dfs(i));
	}
	cout<<ans<<endl;
  return 0;
}

