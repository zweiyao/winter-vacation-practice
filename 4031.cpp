#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int x;
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
