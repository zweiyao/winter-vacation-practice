#include<bits/stdc++.h>
using namespace std;
int a[205]={0};
int main()
{
	int n,sum=0,count=0;
	cin>>n;
	int x=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	int avg=sum/n;
	for(int i=1;i<=n;i++)
	{
		a[i]=a[i]-avg;
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]!=0)
		{
			x=a[i];//²îÖµ
			a[i]=0;
			a[i+1]+=x; 
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
