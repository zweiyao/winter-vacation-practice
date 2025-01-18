#include<bits/stdc++.h>
using namespace std;
long long f[1000005];
int main()
{
	int n;
	long long num;
	cin>>n;
	cin>>num;
	f[0]=0;f[1]=num;
	for(int i=2;i<=n;i++)
	{
		cin>>num;
		f[i]=max(f[i-1]+num,f[i-2]+num);//最多跳一次
	}
	cout<<max(f[n],f[n-1])<<endl;
	return 0;
}
