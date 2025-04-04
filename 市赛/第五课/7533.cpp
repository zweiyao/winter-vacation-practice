#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
};
int n;
struct node a[10005];
void rotate()
{
	for(int i=1;i<=n;i++)
	{
		int tx=a[i].x,ty=a[i].y;
		a[i].x=(-1)*ty;
		a[i].y=tx;
	}
}
void solve()
{
	
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x>>a[i].y;
	}
	for(int i=0;i<4;i++)
	{
		solve();
		rotate();
	}
  return 0;
}

