#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];	
	}
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<" "<<fixed<<setprecision(1)<<a[i]<<" "<<b[i]<<endl;
	}
	return 0;	
} 
