#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ans=n-1;
	for(int i=n-1;i>=1;i--)
	{
		if(a[i]<a[i+1])ans=i-1;
		else break;
	}
	cout<<ans;
  return 0;
}

