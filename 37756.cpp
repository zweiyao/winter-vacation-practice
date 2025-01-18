#include<bits/stdc++.h>
using namespace std;
int f[5000005]={0};
int main()
{
	int a,b,s=0;
	cin>>a>>b;
	for(int i=2;i<=b;i++)
	{
		if(f[i]==0)
		{
			for(int j=1;i*j<=b;j++)
			{
				f[i*j]=1;
			}
			if(i>=a) 
			s++;//没划掉一定是质数 
		}
	}
	cout<<s<<endl;
	return 0;
}
