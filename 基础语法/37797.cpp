#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num;
	cin>>n;
	set<int> a;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		a.insert(num);
	}
	cout<<a.size()<<endl;
	set<int>:: iterator it;
	for(it=a.begin();it!=a.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
} 
