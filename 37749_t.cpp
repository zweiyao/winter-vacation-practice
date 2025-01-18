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
void dg(int dep,int lasti,int sum)
{
	if(dep>r)
	{
		if(shu(sum))
		ans++;
	}
	else{
	for(int i=lasti+1;i<=n;i++)
	{
		a[dep]=i;
		dg(dep+1,i,sum+b[i]);
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
		cin>>b[i];
	}
	sort(a+1,a+n+1);
	dg(1,0,0);
	cout<<ans<<endl;
	return 0;
}
