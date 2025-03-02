#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
using namespace std;
map<string, set<string> > m;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		string name;
		int k;
		cin >> name >> k;
		set<string> s;
		for (int j = 1; j <= k; j++)
		{
			string feature;
			cin >> feature;
			s.insert(feature);
		}
		m[name] = s;
	}
	int ans = 0;
	map<string, set<string> >::iterator i = m.begin();
	map<string, set<string> >::iterator j = m.begin();
	for (i = m.begin(); i!= m.end(); i++)
	{
		for (j = i; j!=m.end(); j++)
		{
			if (j != i)
			{
				int cnt = 0;
				for (auto k : i->second)
				{
					if (j->second.count(k)>0)
						cnt++;
				}
				ans = max(ans, cnt);
			}

		}
	}
	cout << ans+1 << endl;
	return 0;
}

