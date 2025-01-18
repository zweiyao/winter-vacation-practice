#include<bits/stdc++.h>
using namespace std;
int a[15][15];
int c[15];
int n;
bool Ok(int dep)
{
	for(int i=0;i<dep;i++)
	{
		if(a[i][dep]==1&&c[i]==c[dep])
			return 0;
		
	}
	return 1;
}
void dy(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<c[i]<<endl;
	}
}
void dg(int dep)
{
	if(dep>n)
	{	
		dy(dep-1);
		exit(0);
	}
	else
	for(int i=1;i<=4;i++)
	{
		c[dep]=i;
		if(Ok(dep))
		dg(dep+1);
	}
}
int main()
{
	int m;
	int row,col;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>row>>col;
		a[row][col]=1;
		a[col][row]=1;
	}
	dg(1);
	return 0;
}
