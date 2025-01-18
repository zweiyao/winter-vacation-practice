#include<bits/stdc++.h>
using namespace std;
int a[105000]={0};
int find(int *a,int n,int x)
{//二分查找 
	int l=0,r=n,mid;
	while(l+1<r)
	{//l和r至少隔一个数 
		mid=(l+r)/2;
		if(a[mid]<x)
		{
			l=mid;
		}
		else r=mid;
	}
	if(a[r]==x)
	return r;
	return -1; 
}
int main()
{
	int n,Q;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>Q;
	int x;
	for(int i=1;i<=Q;i++)
	{
		cin>>x;
		cout<<find(a,n,x)<<endl;
	}
	return 0;	
}
