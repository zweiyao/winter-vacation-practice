#include<bits/stdc++.h>
using namespace std;
int used[15];
int a[15];
void dy(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
}
bool Ok(int dep)
{
	for(int i=1;i<dep;i++)
	{
		if(abs(dep-i)==abs(a[dep]-a[i]))
		return 0;
	}
	return 1;
}
void dg(int dep,int n)
{
	if(dep>n)
	dy(n);
	else{
	for(int i=1;i<=n;i++)
	{
		if(used[i]==0)//不同列 
		{
			a[dep]=i;
			used[i]=1;
		}
		else
		continue;
		if(Ok(dep))//不同对角线 
		{
			dg(dep+1,n);
		}
		used[i]=0;
	}
	}
}
int main()
{
	memset(used,0,sizeof(used));
	memset(a,0,sizeof(a));
	int n;
	cin>>n;
	dg(1,n);
	return 0;
}
