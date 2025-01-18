#include<bits/stdc++.h>
using namespace std;
int a[150];
int s[150]={0}; 
int main()
{
	int n,temp;
	cin>>n;
	int max=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	//求前缀和 
	for(int i=1;i<=n;i++)
	{
		s[i]=s[i-1]+a[i];
	}
	//遍历所有区间
	for(int l=1;l<=n;l++)
	{
		for(int m=l;m<=n;m++)
		{
			temp=s[m]-s[l-1];
			if(temp>max)
			max=temp;
		}
	} 
	cout<<max<<endl;
	return 0;
 } 
