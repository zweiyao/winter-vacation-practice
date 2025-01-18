#include<bits/stdc++.h>
using namespace std;
int x[1005],f1[1005],f2[1005];
int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	for(int i=1;i<=n;i++)
	{
		int tmp=((long long)a*i*i+b*i+c)%20000;
		x[i]=tmp-10000;
	}
	//1.求前缀和
	f1[1]=x[1];
	for(int i=2;i<=n;i++)
	{
		f1[i]=max(x[i],f1[i-1]+x[i]);
	}
	for(int i=2;i<=n;i++)
	{
		f1[i]=max(f1[i],f1[i-1]);
	}
	//求后缀和 
	f2[n]=x[n];
	for(int i=n-1;i>=1;i--)
	{
		f2[i]=max(f2[i+1]+x[i],x[i]);
	}
	for(int i=n-1;i>=1;i--)
	{
		f2[i]=max(f2[i],f2[i+1]);
	}
	//i为分割线枚举
	int ret=INT_MIN;
	for(int i=2;i<n;i++)
	{
		ret=max(ret,f1[i-1]+f2[i+1]);
	} 
	cout<<ret<<endl;
	return 0;
}
