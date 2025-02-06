#include<bits/stdc++.h>
using namespace std;
int T, n,ret=0;
int t[35],v[35];
void dg(int dep,int time,int val)
{
	if (dep >= n)
	{
		if (val > ret)
			ret = val;
	}
	else
	{
		dg(dep + 1, time, val);
		if (time + t[dep]<=T)
		dg(dep + 1, time + t[dep], val + v[dep]);
	}
}
int main()
{
	cin >> T >> n;
	for (int i = 0; i < n; i++)
		cin >> t[i] >> v[i];
	dg(0,0,0);
	cout << ret<<endl;
	return 0;
}
