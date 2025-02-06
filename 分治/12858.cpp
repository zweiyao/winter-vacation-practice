#include<bits/stdc++.h>
using namespace std;
long long dg(long long a, long long b)
{
	long long ret = 1;
	if (b == 1) return a;
	long long num = dg(a, b / 2);
	ret=(num%999983)*(num%999983)%999983;
	if (b % 2 == 0)
		return ret;
	else
		return (ret % 999983)*(a % 999983)%999983;
}
int main()
{
	long long a, b;
	while (cin >> a>>b)
	{
		cout << dg(a, b) << endl;
	}
	return 0;
}
