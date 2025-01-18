#include<bits/stdc++.h>
using namespace std;
int used[15];
int a[15];
void dy(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<setw(2)<<a[i];
	}
	cout<<endl;
}
void dg(int dep,int n)
{
	if(dep>n)
	dy(n);
	else{
	for(int i=1;i<=n;i++)
	{
		if(used[i]!=1)
		{
			a[dep]=i;
			used[i]=1;
		}
		else
		continue;
		dg(dep+1,n);
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
