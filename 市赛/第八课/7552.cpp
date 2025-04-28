#include <iostream>
#include <cstring>
using namespace std;
int a[20][20];
int r, c;
long long vis[20][20];
long long dfs(int x, int y)
{
  if (x == r && y == c)
  {
    return 1;
  }
  if (vis[x][y] != -1)
    return vis[x][y];
  long long ans = 0;
  for (int i = x + 1; i <= r; i++)
  {
    for (int j = y + 1; j <= c; j++)
    {
      if (a[i][j] ^ a[x][y] == 1)
      {
        ans += dfs(i, j);
      }
    }
  }
  return vis[x][y] = ans;
}
int main()
{
  memset(vis, -1, sizeof(vis));
  cin >> r >> c;
  for (int i = 1; i <= r; i++)
  {
    for (int j = 1; j <= c; j++)
    {
      char ch;
      cin >> ch;
      if (ch == 'R')
        a[i][j] = 0;
      else
        a[i][j] = 1;
    }
  }
  cout << dfs(1, 1) << endl;
  return 0;
}