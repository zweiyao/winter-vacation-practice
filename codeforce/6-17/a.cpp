#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a[15];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s;
		cin>>n>>s;
		int minn=105,maxn=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			minn=min(a[i],minn);
			maxn=max(maxn,a[i]);
		}
		int ans=0;
		if(s<=minn)
		{
			ans=maxn-s;
		}
		else if(s>=maxn)
		{
			ans=s-minn; 
		}
		else
		{
			int l=s-minn;
			int r=maxn-s;
			ans=2*min(l,r)+max(l,r);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
