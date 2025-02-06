#include<bits/stdc++.h>
using namespace std;
int n, k, la;
int a[205], c[205];
int main()
{
	cin >> n;
	a[0] = 1;
	la = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < la; j++)
		{
			a[j] *= i;
		}
		int jw = 0;
		for (int j = 0; j < la; j++)
		{
			a[j] += jw;
			jw = a[j] / 10;
			a[j] %= 10;
		}
		while (jw)
		{
			a[la++] += jw % 10;
			jw /= 10;
		}//永远都是a的位数比c大
		for (int j = 0; j < la; j++)
		{
			c[j] += a[j]+jw;
			jw = c[j]/10;
			c[j] %= 10;
		}
		while (jw)
		{
			c[la++] += jw % 10;
			jw /= 10;
		}
	}
	for (int j = la - 1; j >= 0; j--)
	{
		cout << c[j];
	}
	cout << endl;
	return 0;
}
