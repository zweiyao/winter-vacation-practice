#include<bits/stdc++.h>
using namespace std;
int a[55];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	a[2]=a[0]+a[2];
	for(int i=3;i<n;i++)
	{
		a[i]+=max(a[i-2],a[i-3]);
	}
	cout<<max(a[n-1],a[n-2])<<endl;
	return 0;
}
