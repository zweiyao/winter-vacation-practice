#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,ans=0;
int a[30];
bool check(int num)
{
	double s=0;
	for(int i=0;i<num;i++)
	s+=(1.0)/a[i];
	if(abs(s-(1.0)*x/y)<1e-9)
	return true;
	return false;
}
void dg(int dep,int lasti)
{
		if(dep>=n)
		{
			if(check(n))
			ans++;
		}
		else
		{
			for(int i=lasti+1;i<=m;i++)
			{
				a[dep]=i;
				dg(dep+1,i);
			}
		}
} 
int main()
{
	cin>>n>>m>>x>>y;
	dg(0,0);
	cout<<ans<<endl;
  return 0;
}

