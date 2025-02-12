#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
struct coord{
	int x, y;
};
int m, x, y, t;
int ans[305][305], ztime[305][305];
int dx[4] = { 0,1,0,-1 }, dy[4] = {1,0,-1,0};
queue<coord> q;
int main()
{
	memset(ztime, -1, sizeof(ztime));
	memset(ans, -1, sizeof(ztime));
	ans[0][0] = 0;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> x >> y >> t;
		if (ztime[x][y]>t||ztime[x][y]==-1)
		ztime[x][y] = t;
		if (ztime[x][y+1]>t || ztime[x][y+1] == -1)
		ztime[x][y + 1] = t;
		if (ztime[x+1][y]>t || ztime[x+1][y] == -1)
		ztime[x + 1][y] = t;
		if (ztime[x][max(y - 1, 0)]>t || ztime[x][max(y - 1, 0)] == -1)
		ztime[x][max(y-1,0)] = t;
		if (ztime[max(x - 1, 0)][y]>t || ztime[max(x - 1, 0)][y] == -1)
		ztime[max(x - 1,0)][y] = t;
	}
	coord tmp = { 0, 0 };
	q.push(tmp);
	while (!q.empty())
	{
		coord u = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int tx = u.x + dx[i];
			int ty = u.y + dy[i];
			if (tx<0  ||ty<0 )
				continue;
			if (ztime[tx][ty] == -1){ cout << ans[u.x][u.y] + 1 << endl; exit(0); }
			if (ans[tx][ty]==-1&&ans[u.x][u.y] + 1 < ztime[tx][ty])
			{
				ans[tx][ty]=ans[u.x][u.y]+1;
				tmp = { tx, ty };
				q.push(tmp);
			}
		}
	}
	cout << "-1" << endl;
	return 0;
}

