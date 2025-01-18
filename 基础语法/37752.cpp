#include<bits/stdc++.h>
using namespace std;
int a[25];
void dy(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void dg(int dep,int lasti,int r)
{
	if(r==0&&dep>2)
	dy(dep-1); 
	else
	for(int i=lasti;i<=r;i++)
	{
		a[dep]=i;
		dg(dep+1,i,r-i);
	}
}
int main()
{
	int n;
	cin>>n;
	dg(1,1,n);
	return 0;
} 
