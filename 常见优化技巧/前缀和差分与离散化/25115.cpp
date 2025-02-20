#include<bits/stdc++.h>
using namespace std;
int ans=0;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int tmp=i;
		while(tmp)
		{
			if(tmp%5==0)
			{
				ans++;
				tmp/=5;
			}
			else
			break;
		}
	 } 
	 cout<<ans;
  return 0;
}

