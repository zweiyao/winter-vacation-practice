#include<bits/stdc++.h>
using namespace std;
int a[55000];
int l,n,m;
//最短距离就是每两个相邻石头之间距离的最小值 
//最短距离的最大值就是因为拿掉不同石头会导致最短距离的变换 
bool check(int s)
{
	int last=0;//落脚点离起点距离 
	int cnt=0;//拿走的石头个数 
	for(int i=1;i<=n+1;i++) 
	{
		if(a[i]-last<s)//为了确保最短距离为s得拿掉该石头 
		cnt++; 
		else last=a[i]; //大于最短不搬 
	}
	if(cnt<=m)
		return true;
	return false;
}
int find()
{//左闭右开 
	int left=1,right=l+1,mid;
	while(left+1<right)
	{
		mid=(left+right)/2;
		if(check(mid))
		left=mid;
		else
		right=mid;
	}
	return left;
}
int main()
{
	cin>>l>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	a[n+1]=l; 
	cout<<find()<<endl;
	return 0;
}
