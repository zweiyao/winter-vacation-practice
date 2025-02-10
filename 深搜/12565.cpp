#include<bits/stdc++.h>
using namespace std;
int n;
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

void dg(int lasti)
{
	ans++;
	if (lasti==1)
	{
		return;
	}
	else for (int i = lasti / 2; i >= 1; i--)
	{
		dg(i);
	}
}
int main()
{
	cin >> n;
	dg(n);
	cout << ans << endl;
	return 0;
}
