#include<bits/stdc++.h> 
using namespace std;
int n,m,ans=0;
int a[25][25],vis[25][25];
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
void dg(int x,int y)
{
	vis[x][y] = 1;
	ans++;
	int tx, ty;
	for (int i = 0; i < 4; i++)
	{
		tx = x + dx[i];
		ty = y + dy[i];
		if (tx<1 || ty<1 || tx>n || ty>m || a[tx][ty] == 1 || vis[tx][ty] == 1)
			continue;
		else
			dg(tx, ty);
	}
}
int main()
{
	int x=0, y=0;
	cin >> n >> m; 
	memset(vis, 0, sizeof(vis));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 2)  x = i, y = j;
		}
	}
	dg(x, y);
	cout << ans << endl;
	return 0;
}
