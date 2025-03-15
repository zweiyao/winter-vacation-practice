#include<bits/stdc++.h>
using namespace std;
#define maxv 2010
int n,m;
struct Node{
	int v,dis;
};
vector<Node> Adj[maxv];
const int INF=0x3fffffff;
bool inq[maxv];//判断元素在不在队列里 
queue<int> q;
int d[maxv];
int num[maxv];
bool Spfa(int s)
{
	memset(inq,false,sizeof(inq));
	memset(num,0,sizeof(num));
	fill(d,d+maxv,INF);
	q.push(s);
	inq[s]=true;
	num[s]++;
	d[s]=0;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		inq[u]=false;
		for(int i=0;i<Adj[u].size();i++)
		{
			int v=Adj[u][i].v;
			int dis=Adj[u][i].dis;
			if(dis+d[u]<d[v])
			{
				d[v]=dis+d[u];
				if(!inq[v])
				{
				q.push(v);
				num[v]++;
				inq[v]=true;
				if(num[v]>=n+1)
				return false;
				}
			}
		}
	}
	return true;
}
int main()
{
	cin>>n>>m;
	struct Node tmp={0,0};
	for(int i=1;i<=m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		tmp.v=y;
		tmp.dis=z;
		Adj[x].push_back(tmp);
	}
	tmp.v=n+1;
	tmp.dis=1;
	Adj[1].push_back(tmp);
	for(int i=2;i<=n;i++)
	{
		tmp.v=i;
		Adj[n+1].push_back(tmp);
	}
	bool flag=Spfa(1);
	if(flag==false)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
  return 0;
}

