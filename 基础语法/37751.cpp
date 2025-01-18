#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void dy(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<setw(3)<<a[i];
	}
	cout<<endl;
}
void dg(int dep,int lasti,int r)
{
	if(r<=0)
	{
		if(r==0)
		dy(dep-1);
	}
	else//»¹ÄÜ²ð 
	for(int i=lasti;i>=1;i--)
	{
		a[dep]=i;
		dg(dep+1,i,r-i);
	}
}
int main()
{
	cin>>n;
	dg(1,n,n);
	return 0;
}
