#include<bits/stdc++.h>
using namespace std;
priority_queue< int,vector<long long>,greater<long long> > q;//小根堆 
int main()
{
	int n;
	long long x;
	cin>>n;
	q.push(2);
	q.push(3);
	q.push(5);
	q.push(7);
	for(int i=0;i<n-1;i++)
	{
		x=q.top();
		q.push(q.top()*2);
		q.push(q.top()*3);
		q.push(q.top()*5);
		q.push(q.top()*7);
		//去除重复的数,example(2*3*2==2*2*3)
		while(x==q.top()) 
		q.pop();
	}
	cout<<q.top()<<endl;
	return 0;
}
