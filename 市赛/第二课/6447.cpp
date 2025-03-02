#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> a,c;
void work()
{//0-1
	if(a[0]+a[1]<=c[1])
	{
		a[1]=a[0]+a[1];
		a[0]=0;
	}
	else
	{
		a[0]=a[0]-(c[1]-a[1]);
		a[1]=c[1];
	}
	//1-2
	if(a[1]+a[2]<=c[2])
	{
		a[2]=a[1]+a[2];
		a[1]=0;
	}
	else
	{
		a[1]=a[1]-(c[2]-a[2]);
		a[2]=c[2];
	}
	//2-0	
	if(a[2]+a[0]<=c[0])
	{
		a[0]=a[2]+a[0];
		a[2]=0;
	}
	else
	{
		a[2]=a[2]-(c[0]-a[0]);
		a[0]=c[0];
	}
}
signed main()
{
	int nc,na;
	for(int i=1;i<=3;i++)
	{
		cin>>nc>>na;
		c.push_back(nc);
		a.push_back(na);
	}
	int cnt=33;
	while(cnt--)work();
	if(a[0]+a[1]<=c[1])
	{
		a[1]=a[0]+a[1];
		a[0]=0;
	}
	else
	{
		a[0]=a[0]-(c[1]-a[1]);
		a[1]=c[1];
	}
	for(int i=0;i<3;i++) 
	cout<<a[i]<<"\n"; 
  return 0;
}

