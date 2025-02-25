#include<iostream>
using namespace std;
int a[1005][1005];
int h[1005],l[1005],r[1005],st[1005];
int top;
long long ans = 0;
int main()
{
	int n, m;
	cin >> n >> m;
	char ch;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> ch;
			if (ch == '.')a[i][j] = 1;
			if (ch == '*')a[i][j] = -1;

		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (a[i][j] == -1)h[j] = 0;
			else h[j] = h[j]+1;
		}
		top = 0;
		for (int j = 1; j <= m; j++)
		{//单调栈求r和l数组
			while (top > 0 && h[j] < h[st[top]])
			{
				r[st[top]] = j;
				top--;
			}
			top++;
			st[top] = j;
		}
		while (top>0)
		{
			r[st[top]] = m + 1;
			top--;
		}
		top = 0;
		for (int j = m; j >= 1; j--)
		{
			while (top > 0 && h[j] <= h[st[top]])
			{
				l[st[top]] = j;
				top--;
			}
			top++;
			st[top] = j;
		}
		while (top > 0)
		{
			l[st[top]] = 0;
			top--;
		}
		for (int j = 1; j <= m; j++)
		{
			ans += (j - l[j])*(r[j] - j)*h[j];
		}
	}
	cout << ans<<endl;
	return 0;
}
