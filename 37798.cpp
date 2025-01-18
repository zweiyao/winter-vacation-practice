#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num,x,cnt=0;
	cin>>n;
	set<int> a;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		a.insert(num);
	}
	cin>>x;
	set<int> ::iterator it;
	for(it=a.begin();it!=a.end();it++)
	{
		if(x==2*(*it))
			continue;
		if(a.count(x-*it))
			cnt++;//这样必然会得到两倍的结果 
	}
	cout<<cnt/2<<endl;
} 
