#include<bits/stdc++.h>
using namespace std;
int k;
int a[105];
void dy(int n)
{
	for(int i=n;i>=1;i--)
	{
		cout<<a[i]<<',';
	}
}
void dg(int dep,int lasti)
{
	dy(dep-1);
	cout<<k<<endl;
	if(lasti>1)
	for(int i=sqrt(lasti);i>=1;i--)
	{
		a[dep]=i;
		dg(dep+1,i);
	}
	
}
int main()
{
	cin>>k;
	dg(1,k);
	return 0;
} 
