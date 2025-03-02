#include<bits/stdc++.h>
using namespace std;
int n,h[100005],l[100005],r[100005];
stack<int> st;
int maxn=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>h[i];
	}
	for(int i=1;i<=n;i++)
	{
		while(!st.empty()&&h[st.top()]>h[i])
		{
			r[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
	r[st.top()]=n+1;
	st.pop();
	}
	for(int i=n;i>=0;i--)
	{
		while(!st.empty()&&h[st.top()]>h[i])
		{
			l[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
	l[st.top()]=0;
	st.pop();
	}
	for(int i=1;i<=n;i++){
	maxn=max(maxn,h[i]*(r[i]-l[i]-1));
	}
  	cout<<maxn<<endl;
  return 0;
}

