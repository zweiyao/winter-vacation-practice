#include<iostream>
#include<cstring>
using namespace std;
int n,ret;
int h[25];
void dg(int dep,int high,int num)
{
	if (dep >= n)
	{
		if (num > ret)
			ret = num;
	}
	else
	{
		dg(dep + 1, high,num);
		if (h[dep] <= high)
			dg(dep + 1, h[dep],num+1);
	}
}
int main()
{
	cin >> n;
	ret = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> h[i];
	}
	dg(0, 30000,0);
	cout << ret << endl;
	return 0;
}
