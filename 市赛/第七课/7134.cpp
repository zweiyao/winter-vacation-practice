#include<bits/stdc++.h>
using namespace std;
int a[10005];
int n,k;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		int num;
		cin>>num;
		a[num]++;
	}
	for(int i=1;i<=10000;i++)
	{
		a[i]+=a[i-1];
	}
	int ans=0;
	for(int i=0;i<=10000;i++)
	{
		ans=max(ans,a[i+k+1]-a[i]);
	}
	cout<<ans<<endl;
  return 0;
}

