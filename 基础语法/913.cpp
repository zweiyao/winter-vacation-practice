#include<bits/stdc++.h>
using namespace std;
int a[100005],f[100005];
int main()
{
	int n,x,sum=0;
	cin>>n>>x;
	a[1]=x;
	for(int i=2;i<=n;i++)
	{
		a[i]=(379*a[i-1]+131)%997;
	}
	f[1]=a[1];
	sum=f[1];
	for(int i=2;i<=n;i++)
	{
		f[i]=max(f[i-1],a[i]);
		sum+=f[i];
	}
	cout<<sum<<endl;
	return 0;
}
