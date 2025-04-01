#include<bits/stdc++.h>
using namespace std;
int dir=1;//1ÓÒ-1×ó
int ans=0;
int main()
{
	int x,y;
	cin>>x>>y;
	int tx=x;
	if(x==y){
		ans=0;
		return 0;
	}
	int dis=1;
	while(x<y&&tx<y||(x>y)&&(tx>y))
	{
		ans+=dis+dis/2;
		tx=x+dis*dir;
		dis*=2,dir*=-1;
	}
	if(x<y)
	{
		ans-=(tx-y);
	}
	else
	{
		ans-=(y-tx);
	}
	cout<<ans<<endl;
  return 0;
}

