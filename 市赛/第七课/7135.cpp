#include<bits/stdc++.h>
using namespace std;
int n;
int x[500111],y[500111];
int maxx,secmaxx,minx,secminx;
int maxy,secmaxy,miny,secminy;
void update(int a,int b)
{
	int c[3]={maxx,secmaxx,a};
	sort(c,c+3);
	maxx=c[2],secmaxx=c[1];
	int d[3]={minx,secminx,a};
	sort(d,d+3);
	minx=d[0],secminx=d[1];
	int e[3]={maxy,secmaxy,b};
	sort(e,e+3);
	maxy=e[2],secmaxy=e[1];
	int f[3]={miny,secminy,b};
	sort(f,f+3);
	miny=f[0],secminy=f[1];
}
int main()
{
	maxx=secmaxx=maxy=secmaxy=-2e9;
	minx=miny=secminx=secminy=2e9;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];
		update(x[i],y[i]);
	}
	int ans=2e9;
	for(int i=1;i<=n;i++)
	{
		int x2=maxx,x1=minx,y2=maxy,y1=miny;
		if(x[i]==maxx)x2=secmaxx;
		if(x[i]==minx)x1=secminx;
		if(y[i]==maxy)y2=secmaxy;
		if(y[i]==miny)y1=secminy;
		ans=min(ans,(x2-x1)*(y2-y1));
	}
	cout<<ans<<endl;
  return 0;
}

