#include<bits/stdc++.h>
using namespace std;
int ansi=0,ansa=0; 
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	int l1=y-x;
	int l2=z-y;
	int minn=min(l1,l2);
	int maxn=max(l1,l2);
	if(l1==1&&l2==1)ansi=0;
	else if(minn==1&&maxn>2)ansi=2;
	else if(minn<=2)ansi=1;
	else ansi=2;
	ansa=maxn-1;
	cout<<ansi<<endl<<ansa<<endl;
  return 0;
}

