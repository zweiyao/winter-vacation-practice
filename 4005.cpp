#include<bits/stdc++.h>
using namespace std;
int jiecheng(int n)
{
	int ret=1;
	for(int i=1;i<=n;i++)
	ret*=i;
	return ret;
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<jiecheng(n)/(jiecheng(m)*jiecheng(n-m))<<endl;
	return 0;
	
}
