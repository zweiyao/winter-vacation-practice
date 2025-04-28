#include<bits/stdc++.h>
using namespace std;
int n;
int a[2005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[n+i]=a[i];
	}
	int ans=1e9;
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		for(int j=1;j<=n-1;j++)
		{
			sum+=a[i+j]*j;
		}
		ans=min(ans,sum);
	}
	cout<<ans<<endl;
  return 0;
}

