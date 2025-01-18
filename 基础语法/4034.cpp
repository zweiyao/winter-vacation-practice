#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int max=INT_MIN;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		max=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==max)
		cout<<i+1<<endl;
	}
	return 0;
}
