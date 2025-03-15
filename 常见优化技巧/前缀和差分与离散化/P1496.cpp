#include<bits/stdc++.h>
using namespace std;
#define maxn 20005
int a[maxn],b[maxn];
int f[maxn*2],d[maxn*2],c[maxn*2],dtop=1,ctop=1;
map<int,int> m;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		d[dtop++]=a[i];
		d[dtop++]=b[i];
	}
	//ШЅжи
	sort(d+1,d+dtop);
	for(int i=1;i<dtop;i++)
	{
		if(d[i]!=d[i-1]||i==1)
		{
			c[ctop++]=d[i];
			m[d[i]]=ctop-1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		int x=m[a[i]];
		int y=m[b[i]];
		for(int i=x;i<y;i++)
		{
			f[i]=1;
		}
	}
	int ans=0;
	for(int i=1;i<ctop-1;i++)
	{
		if(f[i])ans+=c[i+1]-c[i];
	}
	cout<<ans<<endl;
	 
		
  return 0;
}

