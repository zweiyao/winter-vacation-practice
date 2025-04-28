#include <iostream>
using namespace std;
int num_c[100005], num_w[100005];
int main()
{
  int n;
  cin >> n;
  string str;
  cin >> str;
  int cnt = 0;
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == 'C')
      cnt++;
    else if (str[i] == 'O')
      num_c[i] = cnt;
  }
  cnt = 0;
  long long ans = 0;
  for (int i = str.size(); i >= 0; i--)
  {
    if (str[i] == 'W')
      cnt++;
    else if (str[i] == 'O')
      ans += cnt * num_c[i];
  }
  cout << ans << endl;
  return 0;
}