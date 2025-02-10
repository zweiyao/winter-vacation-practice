#include<bits/stdc++.h>
using namespace std;
int n,k,ans=0;
int c[10];

void dg(int dep,int sum)
{
		if(dep>=k)
		{
			if(sum==n)ans++;
		}
		else for(int i=0;;i++)
		{
			if(sum+i*c[dep]<=n)
			dg(dep+1,sum+i*c[dep]);	
			else break;
		} 
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<k;i++)
		cin>>c[i];
	dg(0,0);
	cout<<ans;
  return 0;
}

