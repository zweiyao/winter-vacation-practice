#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b,c;
int x,y,z;
int c1,c2,c3;
int sum;
bool check(int mid)
{
	int money=sum;
	if(mid*a>x)
	money=money-c1*(mid*a-x);
	if(mid*b>y)
	money=money-c2*(mid*b-y);
	if(mid*c>z)
	money=money-c3*(mid*c-z);
	if(money>=0)return true;
	else return false;
}
signed main()
{
	cin>>a>>b>>c;
	cin>>x>>y>>z;
	cin>>c1>>c2>>c3;
	cin>>sum;
	int l=0;
	int r=sum/min(a*c1,min(b*c2,c*c3))+max(x/a,max(y/b,z/c))+5;
	int ans=0;
	while(l<=r)
	{
		int mid=(l+r)>>1;
		if(check(mid)){
			ans=mid;
			l=mid+1; 
		}
		else
		r=mid-1;
	}
	cout<<ans<<endl;
  return 0;
}

