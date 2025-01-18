#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	int x=0;
	cin>>x;
	int y=0;
	cin>>y;
	for(int i=n;i>x-1;i--)
	{
		a[i]=a[i-1];
	}
	a[x-1]=y;
	for(int i=0;i<n+1;i++)
	{
		cout<<a[i]<<" ";	
	}
	cout<<endl;
	return 0;
}
