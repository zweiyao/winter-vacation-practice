#include<bits/stdc++.h>
using namespace std;
long long a[1050][1050];
long long s[1050][1050]; 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m,c;
	long long temp;
	int x1,y1;
	long long max=LLONG_MIN;
	cin>>n>>m>>c;
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
	for(int i=1;i<=n-c+1;i++)
	{
		for(int j=1;j<=m-c+1;j++)
		{
			temp=s[i+c-1][j+c-1]-s[i+c-1][j-1]-s[i-1][j+c-1]+s[i-1][j-1];
			if(temp>max)
			{
				max=temp;
				x1=i;
				y1=j;
			}
		}
	}
	cout<<x1<<' '<<y1<<endl;
	return 0;
 } 
