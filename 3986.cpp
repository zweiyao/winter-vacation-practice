#include<bits/stdc++.h>
using namespace std;
int main()
{
	long m,n,r;
	cin>>m>>n;
	while(n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	cout<<m<<endl;
	return 0;
}
