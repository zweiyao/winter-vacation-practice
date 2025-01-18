#include<bits/stdc++.h>
using namespace std;
int used[25];
int a[25];
int b[25];
int n,r;
int ans=0;
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
	long sum=0;
	if(dep>r)
	{
		for(int i=1;i<=r;i++)
		{
			sum+=b[i];
		}
		if(shu(sum))
		ans++;
	}
	else{
	for(int i=1;i<=n;i++)
	{
		if(used[i]==0)
		{
			b[dep]=a[i];
			used[i]=1;
		}
		else
			continue;
		if(a[i]>b[dep-1])//忽略前后来两个数相同的情况 
			dg(dep+1);
		used[i]=0;
	}
	}
}
int main()
{
	memset(used,0,sizeof(used));
	memset(a,0,sizeof(a)); 
	memset(b,0,sizeof(a)); 
	b[0]=INT_MIN;
	cin>>n>>r;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	dg(1);
	cout<<ans<<endl;
	return 0;
}
