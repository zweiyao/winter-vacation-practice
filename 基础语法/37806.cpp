#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0,k=0;
	cin>>n;
	map<int,int> a;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		a[k]++;
	}
	map<int,int>::iterator it;
	for(it=a.begin();it!=a.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
