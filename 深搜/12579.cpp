#include<bits/stdc++.h>
using namespace std;
int x_t,y_t,z_t,n=0,ans=0;
void dg(int dep,int x,int y,int z,int y1,int y2)
{
	if(dep>=n)
	ans++;
	else{
	if(x<x_t)
	dg(dep+1,x+1,y,z,y1+1,y2);
	if(y1>=1&&y<y_t)
	dg(dep+1,x,y+1,z,y1-1,y2+1);
	if(y1+y2*2>=4&&z<z_t)
	{ 
		if(y2>=2)
		dg(dep+1,x,y,z+1,y1,y2-2);
		else if(y2>=1&&y1>=2)
		dg(dep+1,x,y,z+1,y1-2,y2-1);
		else
		dg(dep+1,x,y,z+1,y1-4,y2);
	}
}
}
int main()
{
	cin>>x_t>>y_t>>z_t;
	n=x_t+y_t+z_t;
	dg(0,0,0,0,0,0);
	cout<<ans;
  return 0;
}

