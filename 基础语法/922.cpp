#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a[100005];
int main()
{
	int n;
	long long x, y, z;
	cin >> n >> x >> y >> z;
	for (int i = 1; i <= n; i++)
	{
		a[i] = (x*i*i + y*i + z) % 1000 + 1;
	}
	a[0] = 0;
	for (int i = 3; i <= n; i++)
	{
		a[i] += max(a[i - 2], a[i - 3]);
	}
	cout << max(a[n], a[n - 1]) << endl;
	return 0;
}
