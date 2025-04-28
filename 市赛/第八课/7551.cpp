#include <iostream>
using namespace std;
char c[1000111];
string s, t;
int j, top;
bool check(int x)
{
  while (j < t.size() && x + s.size() > top)
    c[top++] = t[j++];
  if (x + s.size() > top)
    return false;
  for (int i = 0; i < s.size(); i++)
    if (c[x + i] != s[i])
      return false;
  return true;
}
int main()
{
  cin >> t >> s;
  if (s.size() > t.size())
  {
    cout << t << "\n";
    return 0;
  }
  for (int i = 0; i < s.size(); i++)
    c[i] = t[i];
  top = s.size();
  j=s.size();
  for(int i=0;i<=t.size()-s.size()&&j<t.size();i++)
  {
    if(check(i))
    {
      top=i;
      i=max(0,i-(int)s.size());
    }
  }
  for(int i=0;i<top;i++)
    cout<<c[i];
  cout<<"\n";
  return 0;
}