#include<iostream>
#include<algorithm>
using namespace std;
int T, N, M;
int f[10005];
int price[105][105];
int main()
{
	cin >> T >> N >> M;
	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j <= N; j++)
			cin >> price[i][j];
	}
	//t 天  i 纪念币 j手里的钱 
	f[M] = M;
	for (int t = 1; t<T; t++)
	{
		M = f[M];
		for (int j = 0; j <= M; j++)
			f[j] = j;
		for (int i = 1; i <= N; i++)
		{
			for (int j = price[t][i]; j <= M; j++)
			{
				f[j] = max(f[j], f[j-price[t][i]] + price[t+1][i]);
			}
		}
	}
	cout << f[M] << endl;
	return 0;
}

