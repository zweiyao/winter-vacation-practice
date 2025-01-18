#include<bits/stdc++.h>
using namespace std;
long long a[1005];
int main()
{
	int n;
	cin>>n;
	a[0]=1;
	a[1]=3;
	for(int i=2;i<=n;i++)
	{
		a[i]=(2*a[i-1]+a[i-2])%12345;
	}
	cout<<a[n]<<endl;
	return 0;
}
