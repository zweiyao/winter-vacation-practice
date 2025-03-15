#include<bits/stdc++.h>
using namespace std;
#define maxv 500
struct Node{
	int v,dis;
};
vector<Node> Adj[maxv];
const int INF=0x3fffffff;
int n,m,k;
int d[maxv];
int back[maxv];//滚动数组确保没次循环最多加一条边 
bool Bellman(int s)
{
	fill(d,d+maxv,INF);
	d[s]=0;
	cout<<d[n]<<endl;
	for(int i=0;i<k;i++)
	{
		memcpy(back,d,sizeof(d));
		for(int u=1;u<=n;u++)
		{
			for(int j=0;j<Adj[u].size();j++)
			{
				int v=Adj[u][j].v;
				int dis=Adj[u][j].dis;
				if(back[u]+dis<d[v])
				{
					d[v]=back[u]+dis;
				}
			}
		}
	 } 
	 return true;
}
int main()
{
	cin>>n>>m>>k;
	struct Node tmp={0,0};
	for(int i=1;i<=m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		tmp.v=y;
		tmp.dis=z;
		Adj[x].push_back(tmp);
	}
	Bellman(1);
	if(d[n]>=0x3fffffff/2)cout<<"impossible"<<endl;
	else cout<<d[n]<<endl;
  return 0;
}

