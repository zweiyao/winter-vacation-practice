#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	map<string,string> a;
	string str;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		cin>>a[str];
	}
	for(int i=0;i<m;i++)
	{
		cin>>str;
		while(a.find(str)!=a.end())
		{
			str=a[str];
		}
		cout<<str<<endl;
	}
	return 0;
}
