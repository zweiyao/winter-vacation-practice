#include<bits/stdc++.h>
using namespace std;
int t[100005];
priority_queue<int,vector<int>,greater<int> > q;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i]; 
	}
	for(int i=1;i<=m;i++)
	{
		q.push(t[i]);
	}
	int cur=m,cnt=0;
	while(!q.empty())
	{
		int x=q.top();
		x=x-cnt;
		if(x>0)cnt+=x;	
		q.pop();
		if(cur<n)
		q.push(t[++cur]+cnt);
	}
	cout<<cnt<<"\n";
	return 0;
 } 
