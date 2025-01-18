#include<bits/stdc++.h>
using namespace std;
int a[100500];
int n,m;
long long sum=0;
bool check(int s)
{
	int ret=0,cnt=1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>s)//最大和肯定要大于等于单个元素
		return false;
		if(ret+a[i]>s)
		{	//a[i]作为下一组第一个成员 
			cnt++;
			ret=a[i];
		}
		else
		ret+=a[i];
	}
	if(cnt<=m)
		return true;
	else
		return false;
}
int find()
{
	int l,r,mid;
	l=1;r=sum;//左开右闭 
	while(l+1<r)
	{
		mid=(l+r)/2;
		if(check(mid))
			r=mid;	
		else
			l=mid;
	} 
	return r;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<find()<<endl;
	return 0;
}
