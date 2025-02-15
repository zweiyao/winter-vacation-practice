#include<iostream>
using namespace std;
struct BTNode{//1号位放根 //0号位代表空
	int left, right, value, size, num = 0;
	BTNode(int _left = 0, int _right = 0, int _value = 0, int _size = 0)
	{
		left = _left;
		right = _right;
		value = _value;
		size = _size;
	}
}node[10005];
int rank_z(int x,int root){
    if(node[root].size!=0)
    {
        if(x<node[root].value)
            return rank_z(x,node[root].left);
		if (x>node[root].value)
			return node[node[root].left].size + node[root].num + rank_z(x, node[root].right);
		if(x==node[root].value)
            return node[node[root].left].size+1;
    }
    return 1;
}
int find(int x,int root)//排名找数
{
	if (x <= 0)
		return -1;
    if(x<=node[node[root].left].size)
        return find(x,node[root].left);
    else if(x>=node[node[root].left].size+1&&x<=node[node[root].left].size+node[root].num)
        return node[root].value;
    else 
        return find(x-node[node[root].left].size-node[root].num,node[root].right);
}
int find_pre(int x)//建立在x存在的情况下
{
	int pos = rank_z(x, 1);
	if (pos == 1)
		return -2147483647;
	else{
		return find(pos - 1, 1);
	}
}
int find_post(int x)//建立在x存在的情况下
{
	int pos = rank_z(x, 1);
	int cnt=pos+1;
	while (cnt <= node[1].size&&find(cnt, 1) == x)
		cnt++;
	if (cnt > node[1].size)
		return 2147483647;
	else
		return find(cnt,1);
}
void add(int x, int root)
{
	if (node[root].size == 0)//访问到空节点 
	{
		node[root] = BTNode(0, 0, x, 1);
		node[root].num = 1;
	}
	else
	{
		node[root].size++;
		if (x == node[root].value)
		{
			node[root].num++;
		}
		else if (x<node[root].value)
		{
			if (node[root].left == 0)
				node[root].left = node[1].size;
			add(x, node[root].left);
		}
		else
		{
			if (node[root].right == 0)
				node[root].right = node[1].size;
			add(x, node[root].right);
		}
	}
}
void pre_order(int root)
{
	cout << node[root].value << " ";
	if (node[root].left != 0)
		pre_order(node[root].left);
	if (node[root].right != 0)
		pre_order(node[root].right);
}
int main()
{
	int q,op,x;
	cin >> q;
	while (q--)
	{
		cin >> op >> x;
		if (op == 1)cout << rank_z(x, 1) << endl;
		if (op == 2)cout << find(x, 1) << endl;
		if (op == 3)cout << find_pre(x) << endl;
		if (op == 4)cout << find_post(x) << endl;
		if (op == 5)add(x, 1);
	}
	return 0;
}
