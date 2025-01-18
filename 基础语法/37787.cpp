#include<bits/stdc++.h>
using namespace std;
int h[500500];
int n,a,b;
int max_t=INT_MIN;
bool check(int t)
{
	int x=0;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		//所有湿度减去给定时间自然风干量 
		//计算机器可以干完的时间
		 x=h[i]-a*t;
		 if(x>0)
		 {
		 	if(x%b==0)
			 	sum+=x/b;
			else
				sum+=x/b+1;
		 }
	}
	if(sum<=t)
		return true;
	return false;
}
int find()
{
	int l,r,mid;
	l=0;r=max_t/a+2;//左开右闭 
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
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++)
	{
		cin>>h[i];
		if(h[i]>max_t)
			max_t=h[i];
	}
	cout<<find()<<endl;
	return 0;
}
