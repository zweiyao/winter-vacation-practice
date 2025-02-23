#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int p, la = 1, lb = 1;
int a[505], b[505], c[505];
int main()
{
	cin >> p;
	a[0] = 1;
	b[0] = 2;
	la = p*log10(2) + 1;
	while (p)
	{
		if (p & 1)//a=a*b
		{//高精乘高精
			for (int i = 0; i<500; i++)
			{
				for (int j = 0; i + j < 500; j++)
				{
					c[i + j] += a[i] * b[j];
				}
			}
			int jw = 0;
			for (int i = 0; i < 500; i++)
			{
				c[i] += jw;
				jw = c[i] / 10;
				c[i] %= 10;
			}
			memcpy(a, c, sizeof(c));
			memset(c, 0, sizeof(c));
		}

		//b=b*b
		for (int i = 0; i < 500; i++)
		{
			for (int j = 0; i + j <500; j++)
			{
				c[i + j] += b[i] * b[j];
			}
		}
		int jw = 0;
		for (int i = 0; i < 500; i++)
		{
			c[i] += jw;
			jw = c[i] / 10;
			c[i] %= 10;
		}
		memcpy(b, c, sizeof(c));
		memset(c, 0, sizeof(c));
		p >>= 1;
	}

	a[0] -= 1;
	cout << la << endl;
	int count = 0;
	for (int i = 499; i >= 0; i--)
	{
		count++;
		cout << a[i];
		if (count == 50)
		{
			count = 0;
			cout << endl;
		}
	}

	return 0;
}
