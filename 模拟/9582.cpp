#include<bits/stdc++.h>
using namespace std;
int f[5000005];
int ans=0;
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=2;i<=b;i++)
	{
		if(f[i]==0)
		{
			for(int j=i;j<=b;j+=i)
			{
				f[j]++;
			}
		}
	 } 
	 for(int i=a;i<=b;i++)
	 {
	 	ans+=f[i];
	 }
	 cout<<ans;
  return 0;
}

