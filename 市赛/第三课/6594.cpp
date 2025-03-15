#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	a[1]=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>0)
		{
			for(int j=1;j<=a[i];j++)
			{
				if(a[i-j]!=(a[i]-j)&&a[i-j]!=-1)
				{
					cout<<"-1";
					return 0;
				}
				a[i-j]=a[i]-j;
			}
		}
  	}
  	int ans1=0,ans2=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==-1)ans2++;
		if(a[i]==0){
			ans1++;ans2++;
		}
	}  
	cout<<ans1<<" "<<ans2;
	return 0;
}

