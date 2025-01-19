#include<bits/stdc++.h>
using namespace std;
struct part{
	int l;
	int w;
};
struct part a[1005];
int f[1005];
bool cmp(struct part b,struct part c)
{
	if(b.l==c.l)
	return b.w<c.w;
	return b.l<c.l;
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].l>>a[i].w;
	}
	sort(a+1,a+n+1,cmp);
	f[1]=1;
	int ans=0;
	for(int i=2;i<=n;i++)
	{
		f[i]=1;
		for(int j=1;j<=i-1;j++)
		{
			if(a[i].w<a[j].w)
			{
				f[i]=max(f[i],f[j]+1);
			}
		}
		ans=max(ans,f[i]);
	}
	cout<<ans<<endl;
  	return 0;
}

