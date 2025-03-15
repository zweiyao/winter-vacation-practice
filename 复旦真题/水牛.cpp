#include<bits/stdc++.h>
using namespace std;
int a[6];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0;
	for(int i=1;i<=5;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	int res=-1;
	for(int i=1;i<=3;i++)
	{
		for(int j=i+1;j<=4;j++)
		{
			for(int z=j+1;z<=5;z++)
			{
				if((a[i]+a[j]+a[z])%10==0)
				{
					res=(sum-a[i]-a[j]-a[z])%10;	
				}
			}
		}
	}
	cout<<res<<endl;
	}
  return 0;
}

