#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
int n;
struct Node{
	int left, right, father, value;
	Node(int _left=0,int _right=0,int _father=0,int _value=0)
		:left(_left), right(_right), father(_father), value(_value)
	{

	}
}node[105];
int ret,ans=INT_MAX;
int vis[105];
void dfs(int dep, int x)
{
	if (dep < vis[x])
	{
		vis[x] = dep;
		if (node[x].father != 0)
			dfs(dep + 1, node[x].father);
		if (node[x].left != 0)
			dfs(dep + 1, node[x].left);
		if (node[x].right!=0)
			dfs(dep + 1, node[x].right);
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> node[i].value>>node[i].left>>node[i].right;
		if (node[i].left != 0)
			node[node[i].left].father = i;
		if (node[i].right != 0)
			node[node[i].right].father = i;
	}
	for (int i = 1; i <= n; i++)
	{
		memset(vis, 0x3f, sizeof(vis));
		ret = 0;
		//从每个点进行深度遍历
		dfs(0, i);
		for (int j = 1; j <= n; j++)
		{
			ret += vis[j] * node[j].value;
		}
		if (ret <= ans)ans = ret;
	}
	cout << ans << endl;
	return 0;
}
