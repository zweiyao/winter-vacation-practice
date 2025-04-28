#include <iostream>
using namespace std;
int main()
{
  int a, b;
  int x, y;
  cin >> a >> b;
  cin >> x >> y;
  if (max(a, x) > min(b, y))
  {
    cout << max(b, y) - min(a, x) << endl;
  }
  else
  {
    cout << b - a + y - x << endl;
  }
  return 0;
}