#include<bits/stdc++.h>
using namespace std;
int a[100005],d[100005];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		d[i]=a[i]-a[i-1];
	 } 
	 d[n+1]=-a[n];
	 for(int i=1;i<=m;i++)
	 {
	 	int x,y,z;
	 	cin>>x>>y>>z;
	 	d[x]+=z;
	 	d[y+1]-=z;
	 }
	 for(int i=1;i<=n;i++)
	 {
	 	a[i]=a[i-1]+d[i];
	 	cout<<a[i]<<" ";
	 }
	 cout<<endl;
  return 0;
}

