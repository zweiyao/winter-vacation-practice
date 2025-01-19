#include<bits/stdc++.h> 
using namespace std;
typedef struct box{
	int x;
	int y;
	int z;
}box;
box a[605];
int f[605];
bool cmp(box b,box c)
{
	if (b.x == c.x)
	{
		if (b.y == c.y)
			return b.z > c.z;
		else
		return b.y > c.y;
	}
	else
	return b.x > c.x;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].x >> a[i].y >> a[i].z;
		a[n + i].x = a[i].y;
		a[n + i].y = a[i].z;
		a[n + i].z = a[i].x;
		a[2 * n + i].x = a[i].z;
		a[2 * n + i].y = a[i].x;
		a[2 * n + i].z = a[i].y;
		a[3 * n + i].x = a[i].x;
		a[3 * n + i].y = a[i].z;
		a[3 * n + i].z = a[i].y;
		a[4 * n + i].x = a[i].y;
		a[4 * n + i].y = a[i].x;
		a[4 * n + i].z = a[i].z;
		a[5 * n + i].x = a[i].z;
		a[5 * n + i].y = a[i].y;
		a[5 * n + i].z = a[i].x;
	}
	sort(a + 1, a + 6*n+1, cmp);
	//for (int i = 1; i <=6*n; i++)
	//	cout << a[i].x << " " << a[i].y << " " << a[i].z << endl;
	//¿í¸ß0/1±³°ü
	a[0].x = INT_MAX;
	a[0].y = INT_MAX;
	f[0] = 0;
	for (int i = 1; i <= 6 * n; i++)
	{
		for (int j = 0; j <= i - 1; j++)
		{
			if (a[i].x<a[j].x&&a[i].y<a[j].y)
			f[i] = max(f[i], f[j] + a[i].z);
		}
	}
	int ans = 0;
	for (int i = 1; i <= 6 * n; i++)
	{
		ans = max(ans, f[i]);
	}
	cout << ans<<endl;
	return 0;
}


