#include<iostream>
#include<cstring>
using namespace std;
int n, k,la;
int a[100000005];
int main()
{
	cin >> n ;
	a[0] = 1;
	la = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < la; j++)
		{
			a[j]=a[j] * i;
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
			a[la++] = jw%10;
			jw /= 10;
		}
	}
	for (int i = la - 1; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
	return 0;
}
