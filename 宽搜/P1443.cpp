#include<iostream>
#include<queue>
#include<cstdio>
#include<cstring>
#include<iomanip>
using namespace std;
struct coord{
	int x,y;
};
int n,m,x0,y0;
queue<coord> q;
int ans[405][405];
int dx[8]={-2,-1,1,2,2,1,-1,-2},dy[8]={1,2,2,1,-1,-2,-2,-1};
int main()
{
	memset(ans,-1,sizeof(ans));
	cin>>n>>m>>x0>>y0;
	coord tmp={x0,y0};
	ans[x0][y0]=0;
	q.push(tmp);
	while(!q.empty())
	{
		coord u;
		u=q.front();
		q.pop();
		for(int i=0;i<8;i++)
		{
			int tx=u.x+dx[i];
			int ty=u.y+dy[i];
			if(tx<1||tx>n||ty<1||ty>m)
			continue;
			else if(ans[tx][ty]!=-1)
			continue;
			else
			{
				ans[tx][ty]=ans[u.x][u.y]+1;
				tmp={tx,ty};
				q.push(tmp);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<left<<setw(5)<<ans[i][j];
		}
		cout<<endl;
	}
  	return 0;
}

