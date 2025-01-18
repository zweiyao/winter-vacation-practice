#include<bits/stdc++.h>
using namespace std;
struct comodity
{
	int pi;
	int di;
}a[10005];
bool cmp(struct comodity& a,struct comodity& b)
{
	
	if(a.di==b.di)
	{
		return a.pi>b.pi;
	}
	return a.di<b.di;
}
int main()
{
	int n,max=INT_MIN;//记录最大过期时间 
	while(cin>>n)
	{
		int sum=0;
		for(int i=0;i<n;i++)
		{
			if(a[i].di>max)
			max=a[i].di;
			cin>>a[i].pi>>a[i].di;
		}
	sort(a,a+n,cmp);
	for(int i=0;i<max;i++)
	{
		
	
	}
	}	
	return 0;
}
