#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main()
{
	int n,m,num,opt,x,y;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		a.push_back(num);
	}
	for(int i=0;i<m;i++)
	{
		cin>>opt;
		if(opt==1)
		{
			cin>>x>>y;
			a.insert(a.begin()+x,y);
		}
		if(opt==2)
		{
			cin>>x;
			a.erase(a.begin()+x-1);
		}
	}
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
