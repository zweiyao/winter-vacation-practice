#include<bits/stdc++.h> 
using namespace std;
int a[5001],b[5001], f[5001];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,S;
	cin >> n>>S;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i]>>b[i];
		b[i] += b[i-1];
		a[i] += a[i - 1];
	}
	memset(f, 0x3f, sizeof(f));
	f[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= i-1; j++)
		{
			f[i]=min(f[i],f[j]+a[i]*(b[i]-b[j])+S*(b[n]-b[j]));
		}
	}
	cout <<f[n]<<endl;
	return 0;
}
