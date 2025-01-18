#include<bits/stdc++.h>
using namespace std;
int a[10050][10050]={0};
int s[10050][10050]; 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,r;
	int temp;
	int max=INT_MIN;
	cin>>n>>r;
	r=min(r,5000);//不然会数组越界 
	int x,y,w;
	int max_x=INT_MIN;
	int max_y=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y>>w;
		a[x][y]+=w;
		if(x>max_x)
		max_x=x;
		if(y>max_y)
		max_y=y;
	}
	//二维前缀和
	for(int i=1;i<=max_x;i++)
	{
		for(int j=1;j<=max_y;j++)
		s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
	}
	for(int i=1;i<=max_x-r+1;i++)
	{
		for(int j=1;j<=max_y-r+1;j++)
		{
			temp=s[i+r-1][j+r-1]-s[i+r-1][j-1]-s[i-1][j+r-1]+s[i-1][j-1];
			if(temp>max)
			{
				max=temp;
			}
		}
	}
	cout<<max<<endl;
	return 0;
 } 
