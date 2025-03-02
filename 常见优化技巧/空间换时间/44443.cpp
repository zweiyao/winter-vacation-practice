#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[300005];
int ans=INT_MIN;
deque<int> q;
signed main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	q.push_back(0);
	for(int i=1;i<=n;i++)
	{
		while(!q.empty()&&a[q.back()]>a[i])
			q.pop_back();
		while(!q.empty()&&q.front()+m<i)
			q.pop_front();
		q.push_back(i);
		ans=max(ans,a[i]-a[q.front()]);
	}
	cout<<ans<<endl;
  return 0;
}

