#include<bits/stdc++.h>
using namespace std;
long long f3[55],f4[55];
int main()
{
	int n;
	cin>>n;
	f3[0]=0,f4[0]=0;
	f3[1]=1,f4[1]=1;
	for(int i=2;i<=n;i++)
	{
		f3[i]=2*f3[i-1]+1;
		f4[i]=INT_MAX;
		for(int j=1;j<=i;j++)
		{
			f4[i]=min(f4[i],2*f4[j]+f3[i-j]);
		}
	}
	cout<<f4[n]<<endl;
	return 0;
}
