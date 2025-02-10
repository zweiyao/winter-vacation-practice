#include<iostream>
using namespace std;
int n, m;
int a[105][105],zx[105][105];
int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
void dg(int dep, int x, int y)
{
	if (dep < zx[x][y])//既可以找最短路径，又防止陷入死循环
	{
		zx[x][y] = dep;
		for (int i = 0; i < 4; i++)
		{
			int tx = x + dx[i];
			int ty = y + dy[i];
			if (tx<1 || tx>n || ty<1 || ty>m)
				continue;
			if (a[tx][ty] == 0)dg(dep + 1, tx, ty);
		}
	}

}
int main()
{
	memset(zx, 0x3f, sizeof(zx));
	cin >> n >> m;
	char ch;
	int x1,y1,x2,y2;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> ch;
			if (ch == 'S')
			{
				a[i][j] = 0;
				x1 = i;
				y1 = j;
			}
			else if (ch == 'T')
			{
				a[i][j] = 0;
				x2 = i;
				y2 = j;
			}
			else if (ch == '.')
				a[i][j] = 0;
			else
				a[i][j] = -1;
		}
	}
	dg(0, x1, y1);
	cout << zx[x2][y2]<<endl;

	return 0;
}
