#include<bits/stdc++.h>
using namespace std;
int a[105][105],vis[105][105];
int r, c;
int dg(int x, int y)
{
	if (vis[x][y])
		return vis[x][y];
	else{
		if (x - 1 >= 1 && a[x - 1][y] < a[x][y])
		{
				vis[x][y] = max(vis[x][y], dg(x - 1, y) + 1);
		}
		if (y - 1 >= 1 && a[x][y - 1] < a[x][y])
		{
				vis[x][y] = max(vis[x][y], dg(x, y - 1) + 1);
		}
		if (x + 1 <= r && a[x + 1][y] < a[x][y])
		{
				vis[x][y] = max(vis[x][y], dg(x + 1, y) + 1);
		}
		if (y + 1 <= c && a[x][y + 1] < a[x][y])
		{
				vis[x][y] = max(vis[x][y], dg(x, y + 1) + 1);
		}
		return vis[x][y];
	}
}
int main()
{
	cin >> r >> c;
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			cin >> a[i][j];
		}
	}
	int ret = 0;
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			ret=max(ret,dg(i, j));
		}
	}
	cout << ret+1 << endl;
	return 0;
}
