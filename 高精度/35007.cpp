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
int a, b, c[2500], lc, n;
int main()
{

	cin >> a>>b>>n;
	cout << a / b << ".";
	int y = a%b;
	lc = 0;
	while (lc <n)
	{
		y *= 10;
		c[lc++] = y / b;
		y %= b;
	}
	for (int i = k; i <lc; i++)
	{
		cout << c[i];
	}
	cout << endl;
	return 0;
}

