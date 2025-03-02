#include <bits/stdc++.h>
using namespace std;
int a[5000005], d[5000005];
int minn = INT_MAX;
int main()
{
	int n, p;
	cin >> n >> p;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		d[i] = a[i] - a[i - 1];
	}
	for (int i = 1; i <= p; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		d[x] += z;
		d[y + 1] -= z;
	}
	for (int i = 1; i <= n; i++)
	{
		a[i] = a[i - 1] + d[i];
		minn = min(minn, a[i]);
	}
	cout << minn << endl;
	return 0;
}
