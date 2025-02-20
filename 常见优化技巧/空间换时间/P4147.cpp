#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005][1005];
int h[1005][1005],l[1005][1005],r[1005][1005];
int main()
{
	cin>>n>>m;
	char tmp;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>tmp;
			if(tmp=='R')
			a[i][j]=0;
			else
			a[i][j]=1;
			//0不可达1可达 
			h[i][j]=1;
			l[i][j]=j;r[i][j]=j;
		}
		for(int j=2;j<=m;j++)
		{
			if(a[i][j]==1&&a[i][j-1]==1)
			l[i][j]=l[i][j-1];
		}
		for(int j=m-1;j>=0;j--)
		{
			if(a[i][j]==1&&a[i][j+1]==1)
			r[i][j]=r[i][j+1];
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==1&&a[i][j]==1)
			ans=max(ans,r[i][j]-l[i][j]+1);
			else if(i>1&&a[i][j]==1)
			{
				if(a[i-1][j]==1)
				{
					h[i][j]=h[i-1][j]+1;
					l[i][j]=max(l[i][j],l[i-1][j]);
					r[i][j]=min(r[i][j],r[i-1][j]);
				}
				ans=max(ans,h[i][j]*(r[i][j]-l[i][j]+1));
			}
		}
	}
	cout<<3*ans<<endl;
  return 0;
}

