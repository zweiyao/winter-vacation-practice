#include<bits/stdc++.h>
using namespace std;
int time_zwy[10005];
int main()
{
	memset(time_zwy,0,sizeof(time_zwy));//记录每项工作完成时间
	int n,sum=0,t; 
	int max;
	int k,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		max=0;
		cin>>t;
		cin>>k;
		//确定开始时间 
		for(int j=1;j<=k;j++)
		{	
			cin>>x;
			if(time_zwy[x]>max)
			{
				max=time_zwy[x];
			}
		}
		if(max+t>sum) 
		{
			sum=max+t;
		}
		time_zwy[i]=max+t;
	}
	cout<<sum<<endl;
	return 0;
}
