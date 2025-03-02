#include<bits/stdc++.h>
using namespace std;
int a[1005],ans=0,maxy=0;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		maxy=max(maxy,y);
		a[x]+=z;
		a[y+1]-=z;
	}
	for(int i=1;i<=maxy+1;i++)
	{
		a[i]+=a[i-1];
		ans=max(ans,a[i]);
	}

	cout<<ans<<endl;
  return 0;
}

