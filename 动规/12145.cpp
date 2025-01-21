#include<bits/stdc++.h> 
using namespace std;
int v[9],f[1005];
int main()
{
	int n;
	cin >> n;
	v[1] = 2; v[2] = 4; v[3] = 6; v[4] = 8; v[5] = 10; v[6] = 20; v[7] = 50; v[8] = 100;
	f[0] = 1;
	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j>=v[i])
			f[j] += f[j - v[i]];
		}
	}
	cout << f[n] << endl;
	return 0;
}
