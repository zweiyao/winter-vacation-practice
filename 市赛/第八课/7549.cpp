#include <bits/stdc++.h>
using namespace std;
#define data data1
#define len (data[r].y - data[l].y)
struct node
{
  int x, y;
} data[4111];
int n;
bool cmp(node s1, node s2)
{
  return s1.y < s2.y;
}
bool check(int now)
{
  int l = now, r = now + 1;
  while (1)
  {
    bool flag = 0;
    if (len > data[l].x)
    {
      l--;
      flag = 1;
    }
    if (len > data[r].x)
    {
      r++;
      flag = 1;
    }
    if (l < 1 || r > n)
      return 1;
    if (!flag)
      return 0;
  }
  return 0;
}

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> data[i].x >> data[i].y;
  sort(data + 1, data + n + 1, cmp);
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    if (!check(i))
    {
      ans += data[i + 1].y - data[i].y;
    }
  }
  cout << ans << "\n";
  return 0;
}