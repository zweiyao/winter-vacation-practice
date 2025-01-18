#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
const int N=2501;
int ax[N],ay[N];
struct node{
	int x,y;
}po[N];
int s[N][N];
bool cmp(node x,node y)
{
	return x.y<y.y;
}
int get(int x1,int y1,int x2,int y2)
{
	return s[x2][y2] - s[x2][y1-1] - s[x1-1][y2] + s[x1-1][y1-1];
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&po[i].x,&po[i].y);
		ax[i]=po[i].x;ay[i]=po[i].y;
	}
	sort(ax+1,ax+n+1);
	sort(ay+1,ay+n+1);
	for(int i=1;i<=n;i++)
	{
		po[i].x=lower_bound(ax+1,ax+n+1,po[i].x)-ax;
		po[i].y=lower_bound(ay+1,ay+n+1,po[i].y)-ay;
		s[po[i].x][po[i].y]=1;
//		cout<<po[i].x<<" "<<po[i].y<<endl;
	}
   //离散化
	sort(po+1,po+n+1,cmp);//以y为关键字排序，以便后面计算
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];//前缀和
		}
	}
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			int x1=min(po[i].x,po[j].x),x2=max(po[i].x,po[j].x);
			ans+=get(1,po[i].y,x1,po[j].y)*get(x2,po[i].y,n,po[j].y);
		}
	}
	cout<<ans+1;//空矩形+1
	
	return 0;
}
