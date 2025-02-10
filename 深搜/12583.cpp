#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[25],vis[25];
int ans = 0;
bool pss(int num)
{
	if (num <= 2)
		return 0;
	for (int i = 2; i*i <= num; i++)
	{
		if (num%i == 0)
			return 0;
	}
	return 1;
}

void dg(int dep,int lasti,int sum)
{
	if (dep >= k)
	{
		if (pss(sum))ans++;
	}
	else
	{
		for (int i = lasti+1; i < n; i++)
		{
			vis[dep] = a[i];
			dg(dep + 1, i,sum+vis[dep]);
		}
	}
}
int main()
{
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	dg(0, -1,0);
	cout << ans<<endl;
	return 0;
}
