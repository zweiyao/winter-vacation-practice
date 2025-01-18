#include<bits/stdc++.h>
using namespace std;
int m[105],f[105];
int main()
{
	int l1,l2,l3,c1,c2,c3;
	cin>>l1>>l2>>l3>>c1>>c2>>c3;
	int n;
	cin>>n;
	int s,t;
	cin>>s>>t;
	if(s>t)
	{
		int temp=s;
		s=t;
		t=temp;
	}
	m[1]=0;
	for(int i=2;i<=n;i++)
	{
		cin>>m[i];
	}
	f[s]=0;
	for(int i=s+1;i<=t;i++)
	{
		f[i]=INT_MAX;
		for(int j=i-1;j>=s;j--)
		{
			if(m[i]-m[j]<=l1&&m[i]-m[j]>0)
				f[i]=min(f[i],f[j]+c1);
			else if(m[i]-m[j]>l1&&m[i]-m[j]<=l2)
				f[i]=min(f[i],f[j]+c2);
			else if(m[i]-m[j]>l2&&m[i]-m[j]<=l3)
				f[i]=min(f[i],f[j]+c3);
		}
	}
	cout<<f[t]<<endl;
	return 0;
}
