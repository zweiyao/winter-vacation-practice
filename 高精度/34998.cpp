#include<bits/stdc++.h>
using namespace std;
void reverse_arr(string str,int a[])
{//逆转字符串并存入数组
	int len = str.size();
	reverse(str.begin(), str.end());
	memset(a, 0, sizeof(a));
	for (int i = 0; i < len; i++)
	{
		a[i] = str[i] - 48;
	}
}
int a[1050], b[1050],c[1050];
void add_binary(int a[], int b[], int c[],int& len)
{
	for (int i = 0; i < len; i++)
		c[i] = a[i] + b[i];
	int jw = 0;
	for (int i = 0; i < len; i++)
	{
		c[i] += jw;
		jw = c[i] / 10;
		c[i] %= 10;
	}
	if (jw)
	{
		len++;
		c[len - 1] = jw;
	}
}
int main()
{
	int n;
	cin >> n;
	a[0] = 1, b[0] = 1;
	int lc =1;
	for (int i = 3; i <= n; i++)
	{
		add_binary(a, b, c, lc);
		memcpy(a, b, sizeof(b)/sizeof(int));
		memcpy(b, c, sizeof(c)/sizeof(int));
	}
	for (int i = lc - 1; i >= 0; i--)
	{
		cout << c[i];
	}
	cout << endl;
	return 0;
}
