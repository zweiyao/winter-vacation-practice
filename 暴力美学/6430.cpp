#include<bits/stdc++.h>
using namespace std;
int x[105],y[105];
int main()
{
	int n;
	cin>>n;
	int s=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i!=j&&x[i]==x[j])
			{
				for(int k=1;k<=n;k++)
				{
					if(i!=k&&y[i]==y[k])
					s=max(s,abs(y[i]-y[j])*abs(x[i]-x[k]));
				}
			}
		}
	 } 
	 cout<<s<<endl;
  return 0;
}

