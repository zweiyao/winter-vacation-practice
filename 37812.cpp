#include<bits/stdc++.h>
using namespace std;
priority_queue< int,vector<long long>,greater<long long> > q;//小根堆 
int main()
{
	int n,m,num,temp,x;
	cin>>n>>m;
	if(m>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>num;
			q.push(num);
			//按最大的出水量来算时间
			for(int i=0;i<n-1;i++)
			{
				q.pop();
			}
			cout<<q.top()<<endl;
			return 0; 
		}
	}
	for(int i=0;i<m;i++)
	{
		cin>>num;
		q.push(num);
	}
	for(int i=0;i<n-m;i++)
	{
		temp=q.top();
		q.pop();
		cin>>x;
		q.push(temp+x);
	}
	for(int i=0;i<n-1;i++)
		{
				q.pop();
		}
		cout<<q.top()<<endl;
	return 0; 
}
