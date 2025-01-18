#include<bits/stdc++.h>
using namespace std;
struct qu
{
	int left;
	int right;	
};
struct qu a[105];
bool cmp(struct qu a,struct qu b)
{
	return a.right<b.right;
}
int main()
{
	int n;
	int r,l;//代表左右范围 
	cin>>n;
	int max=INT_MIN;//确定右边界 
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].left>>a[i].right;
		if(a[i].right>max)
		{
			max=a[i].right;
		}
	}
	sort(a+1,a+n+1,cmp);
	l=a[1].right;
	r=max;
	int count=1;//第一个肯定可以 
		for(int i=2;i<=n;i++)
		{
			if(a[i].left>=l) 
			{	
				count++;
				l=a[i].right;
			}
		}
	cout<<n-count<<endl;
	return 0;
}
