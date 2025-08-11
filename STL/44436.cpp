#include<bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int> > q;
int main()
{
	int k;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		int n;
		cin>>n;
		for(int j=1;j<=n;j++)
		{
			int x;
			cin>>x;
			q.push(x);
		}
	}
	while(!q.empty())
	{
		cout<<q.top()<<"\n";
		q.pop();
	}
	return 0;
}
