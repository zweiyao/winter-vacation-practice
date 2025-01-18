#include<bits/stdc++.h>
using namespace std;
int a[150][150];
int s[150][150]; 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	int temp;
	int max=INT_MIN;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		cin>>a[i][j];
	}
	//¶þÎ¬Ç°×ººÍ
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
	}
	for(int xl=1;xl<=n;xl++)
	{
		for(int xr=xl;xr<=n;xr++)
		{
			for(int yl=1;yl<=m;yl++)
			{
				for(int yr=yl;yr<=m;yr++)
				{
					temp=s[xr][yr]-s[xl-1][yr]-s[xr][yl-1]+s[xl-1][yl-1];
					if(temp>max)
					max=temp;
				}
			}
		}
	}
	cout<<max<<endl;
	return 0;
 } 
