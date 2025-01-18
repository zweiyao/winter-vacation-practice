#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[n+1];
	int s=0;
	int t=n;
	for(int i=0;i<=n;i++)//初始化数组 
	{
		a[i]=0;
	
	}
	while(t>0)
	{
		for(int i=1;i<n+1;i++)//一圈 
		{
			if(a[i]==1)//跳过已出圈的人 
			continue;
			
			s++;//报数 
			if(s==m)
			{
				s=0; 
				a[i]=1;
				cout<<i<<" ";
				t--;
			}
		}
		
	}
	return 0;
	
}
