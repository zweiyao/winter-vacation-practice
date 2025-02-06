#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int a[210],c[1005];
int main()
{
	string str1;
	int num1;
	cin >> str1 >> num1;
	size_t pos = str1.find('.');
	if (pos == str1.npos)  pos = str1.size();
	else  str1.erase(pos, 1);
	int la = str1.size();
	for (int i = 0; i <la; i++)
	{
		a[i] = str1[i]-48;
	}
	int lc = 0;
	int y = a[lc];
	while (y != 0 && lc < 200)
	{
		c[lc++] = y / num1;
		y %= num1;
		y = y * 10 + a[lc];
	}
	int k = 0;
	while (c[k] == 0 && k < pos - 1)k++;
	for (int i = k; i < pos; i++)
	{
		cout << c[i];
	}
	cout << ".";
	int l=100+pos;
	for (int i = pos; i < l; i++)
		cout << c[i];
//	cout << endl;
	return 0;
}

