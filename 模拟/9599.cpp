#include<iostream>
#include<cstring>
using namespace std;
int n, k;
int f, a[1005], page = 0;
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		a[i] = 1;
	cin >> f;
	for (int i = 0; i<f; i++)
	{
		int x, y;
		cin >> x >> y;
		a[x] += y;
	}
	int sum = 0, hang = 0;
	for (int i = 1; i <= n; i++)
	{
		if (hang + a[i] <= k)hang += a[i];
		else
		{
			page++;
			hang = a[i];
		}
	}
	if (hang>0)page++;
	cout << page << endl;
	return 0;
}

