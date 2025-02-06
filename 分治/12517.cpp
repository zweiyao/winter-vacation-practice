#include<bits/stdc++.h>
using namespace std;
int f[122];
int dg(int n)
{
	if (n <= 100)
	{
		if (f[n] != -1)
			return f[n];
		if (f[n + 11] != -1)
			return f[n] = dg(f[n + 11]);
		return f[n] = dg(dg(n + 11));
	}
	else
		return n - 10;
}
int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		memset(f, -1, sizeof(f));
		cout <<"f91("<<n<<") = "<< dg(n) << endl;
	}
	return 0;
}
