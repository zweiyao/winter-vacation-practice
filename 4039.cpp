#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[n+1];
	int x,y;
	for(int i=0;i<=n;i++)
	{
		a[i]=0;
	
	}
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		for(int j=x;j<=y;j++)
		{
			a[j]=1;
		}
	}
	int count=0;
	for(int i=0;i<=n;i++)
	{
		if(a[i]==0)
		count++;
	}
	cout<<count<<endl;
	return 0;
	
}
