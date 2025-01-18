#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int index=-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	int x=0;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			index=i;
			break;
		}
	}
	if(index==-1)
	cout<<"no"<<endl;
	else
	{
	for(int i=index;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";	
	}
	}
	return 0;
}
