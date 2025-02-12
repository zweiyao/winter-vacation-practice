#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int n, a, b;
int k[205];
int f[205];
queue<int> q;
int main()
{
	memset(f, -1, sizeof(f));
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++)
	{
		cin >> k[i];
	}
	q.push(a);
	f[a] = 0;
	while (!q.empty())
	{
		int floor = q.front();
		q.pop();
		int tf = floor + k[floor];//ÉÏÂ¥
		if(tf>=0&&tf<=n&&f[tf]==-1) { f[tf] = f[floor] + 1; q.push(tf); }

		tf = floor - k[floor];//ÏÂÂ¥
		if (tf >= 0 && tf <= n&&f[tf] == -1) { f[tf] = f[floor] + 1; q.push(tf); }
	}
		cout << f[b] << endl;
	return 0;
}

