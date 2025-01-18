#include<bits/stdc++.h>
using namespace std;
int a[100005]={0};//存放每根木头的长度 
int k,n;
bool Ok(int l)
{
	int duan=0;
	for(int i=1;i<=n;i++)
	{
		duan+=a[i]/l;
	}
	if(duan>=k)
	return true;
	return false;
}
int find(int max)
{
	int l,r,mid;
	l=0;r=max+1;//左闭右开
	while(l+1<r)
	{
		mid=(l+r)/2;
		if(Ok(mid))
		{
			l=mid;	
		}
		else
		r=mid;
	} 
	return l;
}
int main()
{
	//二分查找找到最大长度 
	//长度范围是[0,max+1) 
	cin>>n>>k;
	int max=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<find(max)<<endl;
	return 0;
}
