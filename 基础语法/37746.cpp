#include<bits/stdc++.h>
using namespace std;
int used[25];
int a[25];
int n,ans=0;
void dy(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
}
bool shu(int num)
{
	if(num==1)
	return 0;
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
		return 0;
	}
	return 1;
}
void dg(int dep)
{
	
	if(dep>n)
	{
		if(shu(a[n]+a[1]))
		{	
			ans++;
			dy(n);
		}
		if(ans==10)
		exit(0);
	}
	else{
	for(int i=2;i<=n;i++)
	{
		if(used[i]==0)
		{
			a[dep]=i;
			used[i]=1;
		}
		else
			continue;
		if(shu(i+a[dep-1]))
			dg(dep+1);
		used[i]=0;
	}
	}
}
int main()
{
	memset(used,0,sizeof(used));
	memset(a,0,sizeof(a));
	a[1]=1;
	used[1]=1; 
	cin>>n;
	dg(2);//´Ó2²ã¿ªÊ¼µÝ¹é 
	return 0;
}
