#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int a[10000005];
int main()
{
	int b,lc=0;
	cin >> b;
	int y = 0;
	while ((y*10+1)%b != 0)
	{
		y = y * 10 + 1;
		a[lc++] = y / b;
		y %= b;
	}
	a[lc++] = (y * 10 + 1) / b;
	int k = 0;
	while (a[k] == 0 && k < lc - 1)k++;
	for (int i = k; i < lc; i++)
	{
		cout << a[i];
	}
	cout << endl;
	cout << lc << endl;
	return 0;
}

