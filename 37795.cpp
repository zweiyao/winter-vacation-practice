#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main()
{
	int n,m,num,x,y;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		a.push_back(num);
	}
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		reverse(a.begin()+x-1,a.begin()+y);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "; 
	}
	cout<<endl;
}
