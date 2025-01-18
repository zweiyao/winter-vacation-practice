#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0&&j==0)
				continue;
			else if(i==0&&j!=0)
				a[i][j]+=a[i][j-1];
			else if(i!=0&&j==0)
				a[i][j]+=a[i-1][j];
			else
				a[i][j]+=min(a[i-1][j],a[i][j-1]);
		}
	}
	cout<<a[m-1][n-1]<<endl;
	return 0;
}
