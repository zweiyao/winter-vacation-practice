#include<bits/stdc++.h>
using namespace std;
priority_queue<long long,vector<long long>,greater<long long> > q;
int main()
{
	long long a,n;
	cin>>a>>n;
	q.push(a);
	int cnt=1;
	while(cnt<n)
	{
		cnt++;
		long long x=q.top();
		q.push(2*x+1);
		q.push(3*x+1);
		while(q.top()==x)
		{
			q.pop();
		}
	}
	cout<<q.top()<<"\n";
	return 0;
}
