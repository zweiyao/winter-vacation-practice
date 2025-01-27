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
int a[105], b[105],c[105];
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
	string str1, str2;
	cin >> str1 >> str2;
	int l1=str1.size(),l2=str2.size();
	reverse_arr(str1, a);
	reverse_arr(str2, b);
	int lc = max(l1, l2);
	add_binary(a, b, c, lc);
	for (int i = lc - 1; i >= 0; i--)
	{
		cout << c[i];
	}
	cout << endl;
	return 0;
}
