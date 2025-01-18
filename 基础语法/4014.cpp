#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int min=INT_MAX;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<min)
		min=a[i];
	}
	for(int i=min;i>=1;i--)
	{
		flag=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]%i!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
		cout<<i<<endl;
		break;
		}
	}		
	return 0;
}
