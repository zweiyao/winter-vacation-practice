#include<bits/stdc++.h>
using namespace std;
int t[1005], a[1005], w[1005];
int f[1005][24][80];
int main()
{
	int T,A,n;
	cin >> T >> A >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> t[i] >>a[i]>> w[i];
	}
	memset(f, 0x3f, sizeof(f));
	f[0][0][0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= T; j++)
		{
			for (int z = 0; z <= A; z++)
			{
				f[i][j][z] = min(f[i - 1][j][z], f[i - 1][max(0,j - t[i])][max(0,z - a[i])] + w[i]);
			}
		}
		
	}
	cout << f[n][T][A] << endl;
	return 0;
}
