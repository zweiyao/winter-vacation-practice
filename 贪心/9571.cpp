#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct node{
	int l, r;
}worker[1005];

bool cmp(node a, node b)
{
	return a.l*a.r<b.l*b.r;
}
int cnt[50005]/*倒序*/, ans[50005], money[50005];
int lc = 1, la = 1, lm = 1;
int main()
{
	memset(ans, 0, sizeof(ans));
	memset(cnt, 0, sizeof(cnt));
	memset(money, 0, sizeof(money));
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		cin >> worker[i].l >> worker[i].r;
	}
	sort(worker + 1, worker + n + 1, cmp);

	cnt[0] = worker[0].l;
	for (int i = 1; i <= n; i++)
	{
		//高精度除法 
		int y = 0;
		for (int j = lc - 1; j >= 0; j--)
		{
			y = y * 10 + cnt[j];
			money[j] = y / worker[i].r;
			y %= worker[i].r;
		}
		//处理前导0
		int k = lc - 1;
		while (money[k] == 0 && k>0)k--;
		lm = k + 1;
		//高精比大小
		int f = 0;
		if (la<lm)
		{
			f = 1;
		}
		else if (la == lm)
		{
			for (int j = la - 1; j >= 0; j--)
			{
				if (money[j]>ans[j])
				{
					f = 1;
					break;
				}
				else if (money[j]<ans[j])
				{
					break;
				}
			}
		}
		if (f == 1)
		{
			memcpy(ans, money, sizeof(money));
			la = lm;
		}
		//高精度乘法 
		int jw = 0;
		for (int j = 0; j<lc; j++)
		{
			cnt[j] = cnt[j] * worker[i].l + jw;
			jw = cnt[j] / 10;
			cnt[j] %= 10;
		}
		while (jw)
		{
			lc++;
			cnt[lc - 1] = jw % 10;
			jw /= 10;
		}
	}
	for (int i = la - 1; i >= 0; i--)
	{
		cout << ans[i];
	}
	return 0;
}

