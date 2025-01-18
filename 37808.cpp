#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	map<string,int> a;
	string str;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		cin>>a[str];
	}
	for(int i=0;i<q;i++)
	{
		cin>>str;
		cout<<a[str]<<endl;
	}
	return 0;
}
