#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
//这题同时转向纯唬人，速度相同相当于没转向
 	cin>>n>>k; 
 	int x;
 	int zd=0;
 	int zc=0;
 	for(int i=1;i<=k;i++)
 	{
 		int zd1=INT_MAX,zc1=0;
 		cin>>x;
 		zd1=min(x,n-x);
		zc1=max(x,n-x); 
 		if(zd1>zd)
 		zd=zd1;
 		if(zc1>zc)
 		zc=zc1;
	}
	cout<<zd<<" "<<zc;
  return 0;
}

