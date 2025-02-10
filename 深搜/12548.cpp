#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[105][105], zx[105][105], x[105], y[105];
int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
void dg(int dep, int x, int y)
{
	if (dep < zx[x][y])//既可以找最短路径，又防止陷入死循环
	{
		zx[x][y] = dep;
		for (int i = 0; i < 4; i++)
		{
			int tx = x + dx[i];
			int ty = y + dy[i];
			if (tx<1 || tx>n || ty<1 || ty>n)
				continue;
			if (a[tx][ty] == 0)dg(dep + 1, tx, ty);
		}
	}

}
int main()
{
	memset(a, -1, sizeof(a));
	memset(zx, 0x3f, sizeof(zx));
	cin >> n;
	char ch;
	int x1, y1, x2, y2;
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> ch;
			if (ch == '@')
			{
				a[i][j] = 1;
				x[cnt] = i;
				y[cnt++] = j;
			}
			else if (ch == '#')
				a[i][j] = -1;
			else
				a[i][j] = 0;
		}
	}
	cin >> m;
	for (int i = 0; i<cnt; i++)
		dg(1, x[i], y[i]);
	int ans = 0;
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j<=n; j++)
		{
			if (zx[i][j] <= m)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
