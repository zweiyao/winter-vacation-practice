#include<bits/stdc++.h>
using namespace std;
struct Node {
	int v;
	long long dis;
	Node(int _v, double _dis) :v(_v), dis(_dis) {}
	friend bool operator <(Node a, Node b)
	{
		return a.dis > b.dis;
	}
};
vector < Node > g[10005];
int h[105][105];
long long dis[10005];
int vis[10005];
priority_queue<Node> q;
void Dijkstra(int s)
{
	memset(dis, 0x7f, sizeof(dis));
	memset(vis, 0, sizeof(vis));
	dis[s] = 0;
	q.push(Node(s, 0));
	while (!q.empty())
	{
		int u=q.top().v;
		q.pop();
		if (vis[u])continue;
		vis[u] = 1;
		for(int i=0;i<g[u].size();i++)
		{
			int v = g[u][i].v;
			long long w = g[u][i].dis;
			if (w + dis[u] < dis[v])
			{
				dis[v] = w + dis[u];
				q.push(Node(v, dis[v]));
			}
		}
	}
}
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int main()
{
	int v,r,c;
	cin >> v >> r >> c;
	int minn=INT_MAX;
	for (int i = 1;i <= r;i++)
	{
		for (int j = 1;j <= c;j++)
		{
			cin >> h[i][j];
			minn=min(h[i][j],minn);
		}
	}
	if(minn>0) minn=0;
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			int num = (i - 1) * c + j;
			for(int t=0;t<4;t++)
			{
				int tx=i+dx[t];
				int ty=j+dy[t];
				if(tx>=1&&tx<=r&&ty>=1&&ty<=c)
				{
					g[num].push_back(Node(num+dx[t]*c+dy[t],(1ll<<(h[i][j]-minn))));
				}
			}
//			if (i == r)
//			{
//				if (j != c)
//					g[num].push_back(Node(num + 1,(1ll<<(h[i][j]-minn))));
//			}
//			else
//			{
//				g[num].push_back(Node(num + 1, (1ll<<(h[i][j]-minn))));
//				g[num].push_back(Node(num + r, (1ll<<(h[i][j]-minn))));
//			}
		}
	}
	Dijkstra(1);
	cout <<fixed<<setprecision(2)<< (1.0)*dis[r*c]/((1ll<<(h[1][1]-minn))*v) << "\n";
	return 0;
}
