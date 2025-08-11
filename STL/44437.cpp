#include<bits/stdc++.h>
using namespace std;
//使用两个优先队列来是其中一个栈的最小值是第k小值
priority_queue<int,vector<int>,greater<int> > a;
priority_queue<int> b;
priority_queue<int,vector<int>,greater<int> > c;
int num[200005];
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++) cin>>num[i];
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		c.push(x);
	}
	for(int i=1;i<=m;i++)
	{
		if(!b.empty()&&num[i]<b.top())
		{
			int x=b.top();
			b.pop();
			a.push(x);
			b.push(num[i]); 
		}
		else
		{
			a.push(num[i]);
		}
		while(c.top()==i)
		{
			int x=a.top();
			a.pop();
			cout<<x<<"\n";
			b.push(x);
			c.pop();
			if(c.empty())return 0;
		}
	}
	return 0;
}
