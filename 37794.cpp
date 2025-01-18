#include<bits/stdc++.h>
using namespace std;
vector<int> a[1050];
int main()
{
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int sum;
		cin>>sum;
		for(int j=0;j<sum;j++)
		{
			cin>>num;
			a[i].push_back(num);
		}
		sort(a[i].begin(),a[i].begin()+sum);
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<a[i].size();j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
