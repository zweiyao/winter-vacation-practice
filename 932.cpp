#include<bits/stdc++.h>
using namespace std;
int t[100005],r[100005],f[100005];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i]>>r[i];
	}
	f[0]=0;
	f[1]=t[1];
	for(int i=2;i<=n-1;i++)
	{
		f[i]=min(f[i-2]+r[i-1],f[i-1]+t[i]);
	}
	f[n]=f[n-1]+t[n];
	cout<<f[n]<<endl;
	return 0;
}
