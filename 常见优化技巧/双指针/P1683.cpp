#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[2005];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int l=1,r=1;
	int k=0;
	int ans=INT_MAX;
	int ansl=0,ansr=0;
	while(l<=r&&r<=n+1)
	{
		if(k<m)
		{
			r++;
			b[a[r-1]]++;
			if(b[a[r-1]]==1)k++;
		}
		else
		{
			if(ans>r-l)
			{												
				ans=r-l;
				ansl=l;
				ansr=r-1;
			}
			l++;
			b[a[l-1]]--;
			if(b[a[l-1]]==0)k--;
		}
	}
	cout<<ansl<<" "<<ansr<<endl;
  return 0;
}

