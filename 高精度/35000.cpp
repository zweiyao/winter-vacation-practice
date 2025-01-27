#include<bits/stdc++.h>
using namespace std;
void reverse_arr(string str, int a[])
{
	int len = str.size();
	memset(a, 0, sizeof(a));
	reverse(str.begin(), str.end());
	for (int i = 0; i<str.size(); i++)
	{
		a[i] = str[i] - 48;
	}
}
void sub_binary(int a[], int b[], int c[], int& lc)
{
	for (int i = 0; i<lc; i++)
		c[i] = a[i] - b[i];
	int jw = 0;
	for (int i = 0; i<lc; i++)
	{
		c[i] -= jw;
		if (c[i]<0)
		{
			jw = 1;
			c[i] = c[i] + 10;
		}
		else
			jw = 0;
	}
	while (lc>1 && c[lc - 1] == 0) lc--;
}
int a[105], b[105],c[105];
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int flag = 0;
	int lc = str1.size();
	if (str2.size() > str1.size() || (str1.size() == str2.size() && str2 > str1))
	{
		reverse_arr(str1, b);
		reverse_arr(str2, a);
		lc = str2.size();
		flag = 1;//代表负数
	}//a放大的数字
	else{
		reverse_arr(str1, a);
		reverse_arr(str2, b);
	}
	sub_binary(a, b, c, lc);
	if (flag == 1)
		cout << '-';
	for (int i = lc - 1; i >= 0; i--)
	{
		cout << c[i];
	}
	cout << endl;
	return 0;
}

