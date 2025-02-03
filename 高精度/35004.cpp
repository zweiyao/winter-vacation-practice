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
void multiply_binary(int a[],int b[], int c[],int la,int lb,int &lc)
{
	for (int i = 0; i < la;i++)
	for (int j = 0; j < lb; j++)
		c[i + j] += a[i] * b[j];
	int jw = 0;
	lc = la + lb-1;
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
int a[1005], b[1005],c[2500],lc;
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	reverse_arr(str1, a);
	reverse_arr(str2, b);
	int la = str1.size();
	int lb = str2.size();
	multiply_binary(a, b, c,la,lb,lc);
	for (int i = lc - 1; i >= 0; i--)
	{
		cout << c[i];
	}
	cout << endl;
	return 0;
}

