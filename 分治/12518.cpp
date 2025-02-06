#include<bits/stdc++.h> 
using namespace std;
void han(int n, char a, char b, char c)
{
	if(n<=0)
	return;
	han(n - 1, a, b, c);
	cout << a << " To " << b << endl;
	han(n - 1, c, b, a);
	cout << b << " To " << c << endl;
	han(n - 1, a, b, c);
}
int main()
{
	int n;
	cin >> n;
	han(n, 'A', 'B', 'C');
	return 0;
}
