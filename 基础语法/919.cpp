#include<bits/stdc++.h>
using namespace std;
int a[101][101];
int main()
{
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0)
			{
				a[i][j]+=a[i-1][j];
			}
			else if(i==j)
				a[i][j]+=a[i-1][j-1];
			else
				a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
		}
	}
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[n-1][i]>max)
		max=a[n-1][i];
	}
	cout<<max<<endl;
	return 0;
}
