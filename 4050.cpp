#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int pre=a[0],cur=a[0];
	int count=0;
	int max=0;
	int ret=0;
	for(int i=0;i<n;i++)
	{
		cur=a[i];
		if(pre==cur)
		{
			count++;
			if(i==n-1)
			{
				if(count>max)
				{
					ret=cur; 
				}
			}
		}
		else
		{
			if(count>max)
				{
					max=count;
					ret=pre; 
				}
			count=1;
		}
		pre=cur;
	}
		cout<<ret<<endl;
		return 0;
	}
