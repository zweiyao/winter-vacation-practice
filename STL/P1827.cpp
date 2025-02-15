#include<iostream>
#include<string>
using namespace std;
string z, q;
int cnt = 0;
int root;
void build(int l1, int r1, int l2, int r2)
{

	if (l1<r1 - 1)
	{
		for (int i = l1; i<r1; i++)
		{
			if (z[i] == q[cnt])
			{
				cnt++;
				root = i;
				break;
			}
		}
		build(l1, root, root + 1, r1);
	}
	else if (l1 == r1 - 1)
	{
		cout << z[l1];
		cnt++;
	}
	if (l2<r2 - 1)
	{
		for (int i = l2; i<r2; i++)
		{
			if (z[i] == q[cnt])
			{
				cnt++;
				root = i;
				break;
			}
		}
		build(l2, root, root + 1, r2);
	}
	else if (l2 == r2 - 1)
	{
		cout << z[l2];
		cnt++;
	}
	cout << z[r1];
}
int main()
{
	cin >> z >> q;
	for (int i = 0; i<z.size(); i++)
	{
		if (z[i] == q[0])
		{
			root = i;
			break;
		}
	}
	cnt++;
	build(0, root, root + 1, z.size());//×ó±ÕÓÒ¿ª
	return 0;
}
