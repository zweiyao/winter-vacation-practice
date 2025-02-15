#include<iostream>
using namespace std;
int n, m;
int fa[1005];//²¢²é¼¯
void Init(int num)
{
	for (int i = 1; i <= num; i++)
	{
		fa[i] = i;
	}
}
int find(int x)
{
	if (x == fa[x])return x;
	return fa[x] = find(fa[x]);
}
void join(int x, int y)
{
	int f1 = find(x), f2 = find(y);
	if (f1 == f2)
		return;
	else
		fa[f1] = f2;
}
int main()
{
	int x, y;
	while (cin >> n){
		if (n == 0)
			return 0;
		cin >> m;
		Init(n);
		for (int i = 1; i <= m; i++)
		{
			cin >> x >> y;
			join(x, y);
		}
		int ret = 0;
		for (int i = 1; i <= n; i++)
		{
			if (fa[i] == i)
				ret++;
		}
		cout << ret - 1 << endl;
	}
	return 0;
}


