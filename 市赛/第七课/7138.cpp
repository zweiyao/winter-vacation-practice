#include<bits/stdc++.h>
using namespace std;
int ans=1e9;
int main()
{
	int x,y,m;
	cin>>x>>y>>m;
	for(int i=1;i<=m/x;i++)
		ans=min(ans,(m-i*x)%y);
	cout<<m-ans<<endl;
  return 0;
}

