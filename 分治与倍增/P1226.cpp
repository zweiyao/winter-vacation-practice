#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int a,b,p;
	cin>>a>>b>>p;
	int sum=1;
	int tmp_a=a,tmp_b=b;
	while(b)
	{
		if(b&1)sum=sum*a%p;
		a=a*a%p;
		b>>=1;
	}
	cout<<tmp_a<<"^"<<tmp_b<<" mod "<<p<<"="<<sum;
  return 0;
}

