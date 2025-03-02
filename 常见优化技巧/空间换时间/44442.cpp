#include<bits/stdc++.h>
using namespace std;
deque<int> qmin,qmax;
int a[1000005];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		while(!qmin.empty()&&a[qmin.back()]>a[i])
			qmin.pop_back();
		while(!qmin.empty()&&qmin.front()+k<=i)
			qmin.pop_front();
		qmin.push_back(i);
		if(i>=k)cout<<a[qmin.front()]<<" ";
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		while(!qmax.empty()&&a[qmax.back()]<a[i])
			qmax.pop_back();
		while(!qmax.empty()&&qmax.front()+k<=i)
			qmax.pop_front();
		qmax.push_back(i);
		if(i>=k)cout<<a[qmax.front()]<<" ";
	}
  return 0;
}

