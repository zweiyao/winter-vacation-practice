#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	} 
	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		int l=0,r=n;
		while(l+1<r)
		{
			int mid=(l+r)/2;
			if(a[mid]<x)l=mid;
			else r=mid;
		}
		if(a[r]==x)cout<<r<<"\n";
		else cout<<"-1"<<"\n";
	}
  return 0;
}

