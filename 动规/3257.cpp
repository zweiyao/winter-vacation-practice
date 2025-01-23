#include<bits/stdc++.h> 
using namespace std;
int pos[1005],a[1005];
int f[1005][1005][2];
int main()
{
	int n,v;
	cin >> n>>v;
	for (int i = 1; i <= n; i++)
	{
		cin >> pos[i] >> a[i];
		a[i] += a[i - 1];
	}
	memset(f, 0x3f, sizeof(f));
	f[v][v][0] = 0;
	f[v][v][1] = 0;
	for (int i = v ; i >= 1; i--)
	{
		for (int j = i+1 ; j <= n; j++)
		{
			f[i][j][0] = min(f[i + 1][j][0] + (pos[i + 1] - pos[i])*(a[n] - a[j] + a[i]), f[i + 1][j][1] + (pos[j] - pos[i])*(a[n] - a[j] + a[i]));
			f[i][j][1] = min(f[i][j - 1][1] + (pos[j] - pos[j - 1])*(a[n] - a[j - 1] + a[i - 1]), f[i][j - 1][0] + (pos[j] - pos[i])*(a[n] - a[j - 1] + a[i - 1]));
		}
	}
	cout << min(f[1][n][0],f[1][n][1]) << endl;
	return 0;
}

