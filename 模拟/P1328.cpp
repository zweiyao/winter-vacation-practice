#include<iostream>
using namespace std;
int n, na, nb;
int p1,p2;
int a[205], b[205], temp[5][5] = { {0,-1,1,1,-1},{1,0,-1,1,-1},{-1,1,0,-1,1},{-1,-1,1,0,1},{1,1,-1,-1,0} };
void score(int x, int y)
{
	if (temp[x][y] == -1)
		p2++;
	if (temp[x][y] == 1)
		p1++;
}
int main()
{
	cin >> n >> na >> nb;
	for (int i = 0; i < na; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < nb; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n; i++)
	{
		score(a[i%na], b[i%nb]);
	}
	cout << p1 <<" "<< p2 << endl;
	return 0;
}
