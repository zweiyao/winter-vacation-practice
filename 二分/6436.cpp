#include<bits/stdc++.h>
using namespace std;
int n;
string str;
bool check(int len)
{
	for(int i=0;i<n-len;i++)
	{
		for(int j=i+1;j<=n-len;j++)
		{
			int f=0;
			for(int k=0;k<len;k++)
			{
				if(str[i+k]!=str[j+k])
				{
				f=1;
				break;
				}
			}
			if(f==0)return false;
		}
	}
	return true;
}
int main()
{
	cin>>n;
	cin>>str;
	int l=1,r=n;
	int ans=0;
	while(l<=r)
	{
		int mid=(l+r)>>1;
		if(check(mid))
		{
			ans=mid;
			r=mid-1;
		}
		else l=mid+1;
	 }
	 cout<<ans; 
  return 0;
}

