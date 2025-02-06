#include<bits/stdc++.h>
using namespace std;
int v, n, vol[35],mini;
void dg(int dep,int sum)
{
	if (dep >= n)
	{
		int ret = v-sum;
		if (ret >= 0 && ret < mini)
			mini = ret;
	}
	else
	{
		for (int i = 0; i <= 1; i++)
		{
			if(sum+i*vol[dep]<=v)
			dg(dep + 1,sum+i*vol[dep]);
		}
	}
}
int main()
{
	cin >> v >> n;
	mini = v;
	for (int i = 0; i < n;i++)
	cin >> vol[i];
	dg(0,0);
	cout << mini << endl;
	return 0;
}
