#include<bits/stdc++.h> 
using namespace std;
//struct question{
//	int score;
//	int min;
//};
int a[10005],b[10005];
int f1[10005],f2[10005];
int main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> b[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (j >= b[i])
				f2[j] = max(f1[j], f2[j - b[i]] + a[i]);
			else
				f2[j] = f1[j];
		}
		memcpy(f1,f2,sizeof(f1));
	}
	cout << f1[m] << endl;
	return 0;

}
