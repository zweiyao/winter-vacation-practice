#include<bits/stdc++.h>
using namespace std;
int a[105],b[105],c[105];

int main()
{
	memset(a,0,sizeof(a));
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		int cnt=0;
		for(int j=0;j<=n-1;j++)
		{
			if(a[j]==0)cnt++;
			if(cnt==b[i]+1)
			{
				c[i]=j;
				a[j]=1;
				break;
			}
		}
	}
	for(int i=0;i<=n-1;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
  return 0;
}

