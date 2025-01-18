#include<bits/stdc++.h>
using namespace std;
long long f[20];
int main()
{
	f[1]=3;
	f[2]=11;
	int n;
	cin>>n;
	for(int i=3;i<=n;i++)
	{
		f[i]=4*f[i-1]-f[i-2];
	}
	cout<<f[n]<<endl;
	return 0;
}
