#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[100005];//邻接表 
int u[100005];
struct edge{
	int from,to;
};
vector<edge> s;//存边 
queue<int> q;
void dfs(int x)
{
	cout<<x<<" ";
	u[x]=1;
	for(int i=0;i<v[x].size();i++)
	{
		if(u[v[x][i]]==0)
		dfs(v[x][i]);
	}
}
bool cmp(edge x,edge y)
{
	if(x.to==y.to)return x.from<=y.from;
	return x.to<y.to;
}
int main()
{
	cin>>n>>m;
	int x,y;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		s.push_back((edge){x,y});
	}
	sort(s.begin(),s.end(),cmp);
	for(int i=0;i<s.size();i++)
	{
		v[s[i].from].push_back(s[i].to);
	}
	//深度优先 
	memset(u,0,sizeof(u));
	dfs(1);
	cout<<endl;
	memset(u,0,sizeof(u));
	q.push(1);
	u[1]=1;
	while(!q.empty())
	{
		int tmp=q.front();
		q.pop();
		cout<<tmp<<" ";
		for(int i=0;i<v[tmp].size();i++)
		{
			if(u[v[tmp][i]]==0)
				{
					u[v[tmp][i]]=1;
					q.push(v[tmp][i]);
				}
		}
	}
  return 0;
}

