#include<bits/stdc++.h> 
using namespace std;
int a[705],f[705];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		f[i] = max(f[i], f[i - 3] +a[i-1]+ a[i]);
		f[i] = max(f[i], f[i - 2] + a[i]);
		f[i] = max(f[i], f[i -1]);
	}
	cout << f[n] << endl;
	return 0;
}
