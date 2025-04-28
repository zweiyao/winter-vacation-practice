#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
int n, t;
vector<int> m[100005];
int outdegree[100005], indegree[100005];
int ret[2];
int del[100005];
stack<int> st;
void dfs(int u)
{
	for (int i = del[u]; i < m[u].size(); i=del[u])
	{
		del[u] = i + 1;
		dfs(m[u][i]);
	}
	st.push(u);
}
int main()
{
	cin >> n>>t;
	for (int i = 1; i <= t; i++)
	{
		int u, v;
		cin >> u >> v;
		m[u].push_back(v);
		outdegree[u]++;
		indegree[v]++;
	}
	int flag = 0,s=1;
	for (int i = 1; i <= n; i++)
	{
		sort(m[i].begin(), m[i].end());
		if (indegree[i] != outdegree[i])
		{
			if (indegree[i] - outdegree[i] == 1)
			{
				flag = 1;
				ret[0]++;
			}
			else if (outdegree[i] - indegree[i] == 1)
			{
				flag = 1;
				ret[1]++;
				s = i;
			}
			else
			{
				cout << "No" << endl;
				return 0;
			}
		}
	}
	if (!((flag == 0) || (ret[0] == ret[1] && ret[1] == 1))){
		cout << "No" << endl;
		return 0;
	}
	dfs(s);
	while (!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	return 0;
}
