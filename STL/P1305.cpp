#include<iostream>
#include<string>
using namespace std;
struct Node{
	char left;
	char right;
	char value;
	Node(char _left='*', char _right='*', int _value='*')
	{
		left = _left;
		right = _right;
		value = _value;
	}
}node[30];
int n;
string str;
void pre_order(int root)
{
	cout << node[root - 92].value;
	if (node[root - 92].left != '*')
		pre_order(node[root - 92].left);
	if (node[root - 92].right != '*')
		pre_order(node[root - 92].right);
}
int main()
{
	char fir;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> str;
		if (i == 1)
			fir = str[0];
		node[str[0] - 92].value = str[0];
		node[str[0] - 92].left = str[1];
		node[str[0] - 92].right = str[2];
	}
	pre_order(fir);
	return 0;
}

