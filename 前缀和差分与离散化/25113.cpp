#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
	memset(a,0,sizeof(a));
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int l,r;
		cin>>l>>r;
		a[l]+=1;
		a[r+1]-=1;
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		a[i]+=a[i-1];
		if(a[i]%2==1)ans++;
	}
	cout<<ans;
	cout<<endl;
  return 0;
}

