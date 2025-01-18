#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int sum=0;
	cin>>n;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(i*i==n)
			sum+=i;
			else
			sum+=i+n/i;
		}
	}
	cout<<sum<<endl;
	return 0;
}
