#include<bits/stdc++.h>
using namespace std;
int l[105],r[105];
int a[100005],b[100005],tmp[100005];
int n,m,k;
int main(){
	
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
		b[i]=i;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>l[i]>>r[i];
		for(int j=l[i];j<=(l[i]+r[i])>>1;j++)
		{
			swap(a[j],a[r[i]-(j-l[i])]);
		}
	}
	while(k)
	{
		if(k&1)
		{
			for(int i=1;i<=n;i++)
			{
				tmp[i]=b[i];
			}
			for(int i=1;i<=n;i++)
			{
				b[i]=tmp[a[i]];
			}
		}
		k>>=1;
		for(int i=1;i<=n;i++)
		{
			tmp[i]=a[i];

		}
		for(int i=1;i<=n;i++)
		{
				a[i]=tmp[tmp[i]];
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<"\n";
	}
	return 0;
}
