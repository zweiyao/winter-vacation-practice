#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int a[505][505],temp[505][505];
void spin(int x, int y,int r,int z)
{
	if (z == 0)//À≥ ±’Î
	{
		for (int i = x - r; i <= x + r;i++)
		for (int j = y - r; j <= y + r; j++)
			temp[i][j] = a[i][j];
		int x1 = x + r, y1 = y-r;
		for (int i = x - r; i <= x + r; i++)
		{
			for (int j = y - r; j <= y + r; j++)
			{
				a[i][j] = temp[x1][y1];
				x1--;
			}
			x1 = x + r; y1++;
		}
	}
	else
	{
		for (int i = x - r; i <= x + r; i++)
		for (int j = y - r; j <= y + r; j++)
			temp[i][j] = a[i][j];
		int x1 = x -r, y1 = y + r;
		for (int i = x - r; i <= x + r; i++)
		{
			for (int j = y - r; j <= y + r; j++)
			{
				a[i][j] = temp[x1][y1];
				x1++;
			}
			x1 = x - r; y1--;
		}
	}
}
int main()
{
	cin >> n >> m;
	int x, y, r, z;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			a[i][j] = n*(i - 1) + j;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> x >> y >> r >> z;
		spin(x, y, r, z);

	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
