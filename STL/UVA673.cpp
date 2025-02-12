#include<iostream>
#include<string>
#include<stack>
#include<cstdio>
using namespace std;
stack<char> st;
int main()
{
	int n;
	cin >> n;
	string str;
	getline(cin, str);
	for (int i = 0; i<n; i++)
	{
		while (!st.empty()) st.pop();
		getline(cin, str);
		cout << str.size();
		for (int j = 0; j<str.size(); j++)
		{
			if (st.empty())
				st.push(str[j]);
			else {
			if (str[j] == ')'&&st.top() == '(')
			{
				st.pop();
			}
			else if (str[j] == ']'&&st.top() == '[')
			{
				st.pop();
			}
			else if (str[j] == '}'&&st.top() == '{')
			{
				st.pop();
			}
			else st.push(str[j]);
			}
		}
		if (st.empty()) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
