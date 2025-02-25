#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int n;
long long ans=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int tmp;
		cin>>tmp;
		while(!st.empty()&&st.top()<=tmp)
		{
			st.pop();
		}
		ans+=st.size();
		st.push(tmp);
	}
	cout<<ans;
  return 0;
}

