#include<bits/stdc++.h>
using namespace std;
int used[25];
int a[25];
int n,r;
void dy(int n)
{
	for(int i=1;i<=r;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
}
void dg(int dep)
{
	
	if(dep>r)
	{
		dy(n);
	}
	else{
	for(int i=1;i<=n;i++)
	{
		if(used[i]==0)
		{
			a[dep]=i;
			used[i]=1;
		}
		else
			continue;
		if(i>a[dep-1])
			dg(dep+1);
		used[i]=0;
	}
	}
}
int main()
{
	memset(used,0,sizeof(used));
	memset(a,0,sizeof(a)); 
	a[0]=INT_MIN;
	cin>>n>>r;
	dg(1);//´Ó2²ã¿ªÊ¼µÝ¹é 
	return 0;
}
