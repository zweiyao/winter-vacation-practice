#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	memset(a,0,sizeof(a));
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int l,r,x;
		cin>>l>>r>>x;
		a[l]+=x;
		a[r+1]-=x;
	}
	for(int i=1;i<=n;i++)
	{
		a[i]+=a[i-1];
		cout<<a[i]<<" ";
	}
	cout<<endl;
  return 0;
}

