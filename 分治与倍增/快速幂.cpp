#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,k;
	cin>>p>>k;
	int res=1;
	while(k)
	{
		if(k&1)
		{
			res*=p;	
		}
		p=p*p;
		k>>=1;
	}
	cout<<res;
	
  return 0;
}

