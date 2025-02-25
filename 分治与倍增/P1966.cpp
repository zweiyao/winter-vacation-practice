#include<iostream>
#include<algorithm>
using namespace std;
#define mod 99999997
struct node{
	int no; 
	int high;
}a[100005],b[100005];
int n;
int x[100005],tmp[100005];
long long ans=0;
bool cmp(node a, node b)
{
	return a.high < b.high;
}
void merge_sort(int l, int r)
{
	if (r == l) return;
	int mid = (r + l) >> 1;
	merge_sort(l, mid);
	merge_sort(mid + 1, r);
	int i = l, j = mid + 1, k = l;
	while (i <= mid&&j <= r)
	{
		if (x[i] <= x[j]){ tmp[k++] = x[i]; i++; ans += j - mid - 1; ans %= mod; }
		else { tmp[k++] = x[j]; j++; }
	}
	while (i <= mid){ tmp[k++] = x[i]; i++; ans += j - mid - 1; ans %= mod; }
	while (j <= r){ tmp[k++] = x[j]; j++; }
	for (int i = l; i <= r; i++)
	{
		x[i] = tmp[i];
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a[i].no = i; 
		cin >> a[i].high;
	}
	for (int i = 1; i <= n; i++)
	{
		b[i].no = i;
		cin >> b[i].high;
	}
	sort(a + 1, a + n + 1,cmp);
	sort(b + 1, b + n + 1,cmp);
	for (int i = 1; i <= n; i++)
		x[a[i].no] = b[i].no;
	merge_sort(1, n);
	cout << ans<<endl;
	return 0;
}
