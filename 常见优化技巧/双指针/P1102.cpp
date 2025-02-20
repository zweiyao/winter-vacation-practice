#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	int n,c;
	cin>>n>>c;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	sort(a,a+n);
	int l=0,r=0;
	long long ans=0;
	for(int i=0;i<n-1;i++)
	{
		int tmp=a[i]-c;
		while(a[l]<tmp&&l<n)l++;
		while(a[r]<=tmp&&r<n)r++;
		ans+=r-l;
	}
	cout<<ans;
  return 0;
}

