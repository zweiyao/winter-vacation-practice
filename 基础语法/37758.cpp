#include<bits/stdc++.h>
using namespace std;
int f[5000005]={0};
int main()
{
	int a,b=0;
	long long s=0;
	cin>>a>>b;
	for(int i=2;i<=b;i++)
	{
		if(f[i]==0)
		{
			for(int j=1;i*j<=b;j++)
			{
				if(f[i*j]==0)
				{
					f[i*j]=i;
				}
			}
		}
		if(i>=a) s+=f[i];
	}
	cout<<s<<endl;
	return 0;
}
