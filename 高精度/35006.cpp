#include<bits/stdc++.h>
using namespace std;
int k = 0;
void reverse_arr(string str, int a[])
{
	int len = str.size();
	memset(a, 0, sizeof(a));
	for (int i = 0; i<str.size(); i++)
	{
		a[i] = str[i] - 48;
	}
}
void div_binary(int a[],int b, int c[],int la,int &lc)
{
	int y = 0;
	for (int i = 0; i < la; i++)
	{
		y = y * 10 + a[i];
		c[i] = y / b;
		y = y%b;
	}
	while (!c[k] && k < lc - 1)
		k++;
	 
}
int a[1005], b,c[2500],lc;
int main()
{
	string str1;
	cin >> str1 >>b;
	reverse_arr(str1, a);
	int la = str1.size();
	int lc = la;
	div_binary(a, b, c,la,lc);
	for (int i = k; i <= lc - 1; i++)
		cout << c[i];
	cout << endl;
	return 0;
}

