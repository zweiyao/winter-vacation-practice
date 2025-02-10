#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[105][1005], zx[105][1005];
int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
void dg(int dep, int x, int y,int f)
{
	if (dep < zx[x][y])
	{
		zx[x][y] = dep;
		for (int i = 0; i < 4; i++)
		{
			int tx = x + dx[i];
			int ty = y + dy[i];
			if (tx<1 || tx>m || ty<1 || ty>m)continue;
			if (f==1&&a[tx][ty] == -1)continue;//不能连续走两个空格

			if (a[x][y] == a[tx][ty])dg(dep, tx, ty,0);
			else if (a[tx][ty]>=0)dg(dep + 1, tx, ty,0);
			else { a[tx][ty] = a[x][y]; dg(dep + 2, tx, ty,1); a[tx][ty] = -1; };
		}
	}
}
int main()
{
	memset(a, -1, sizeof(a));
	memset(zx, 0x3f, sizeof(zx));
	cin >> m>>n;
	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		cin >> a[x][y];
	}
	dg(0, 1, 1,0);
	if (zx[m][m] >= 2 * m*m)cout << "-1" << endl;
	else cout << zx[m][m] << endl;
	return 0;
}

