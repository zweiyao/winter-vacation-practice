#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	long long a[n];
	long long sum=0;
	for(int i=1;i<=n;i++)
	{
		a[i]=pow(2,i-1);
	}
	for(int i=m;i<=n;i++)
	{
		sum+=a[i];
	}
	cout<<sum<<endl;
	return 0;
}
