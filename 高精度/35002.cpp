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
void multiply_binary(int a[],int b, int c[], int& lc)
{
	for (int i = 0; i < lc; i++)
		c[i] = a[i] * b;
	 int jw = 0;
	 for (int i = 0; i < lc; i++)
	 {
		 c[i] = c[i] + jw;
		 jw = c[i] / 10;
		 c[i] = c[i] % 10;
	 }
	 while (jw)
	 {
		 lc++;
		 c[lc - 1] = jw % 10;
		 jw = jw / 10;
	 }
	 while (!c[lc-1] && lc > 1)
		 lc--;
}
int a[1050], b=2,c[1050],n;
int main()
{
	cin >>n ;
	int lc = 1;
	a[0] = 1;
	for (int i = 0; i < n; i++)
	{
		multiply_binary(a, 2, c, lc);
		memcpy(a, c, sizeof(c)/sizeof(int));
		memset(c, 0, sizeof(c));
	}
	for (int i = lc - 1; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
	return 0;
}

