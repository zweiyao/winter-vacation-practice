#include<bits/stdc++.h>
using namespace std;
int x[200005];
int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int ret=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		int tmp=((long long)a*i*i+b*i+c)%20000;
		x[i]=tmp-10000;
	}
	for(int i=1;i<=n;i++)
	{
		x[i]=min(x[i-1],x[i-2])+x[i];
	}
	cout<<min(x[n-1],x[n])<<endl;
	return 0;
}
