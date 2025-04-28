#include<bits/stdc++.h>
using namespace std;
int t;
int fa[30001],d[30001],num[30001];
int find(int x)
{
	if(x==fa[x])return x;
	int fn=find(fa[x]);
	d[x]+=d[fa[x]];
	return fa[x]=fn;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	for(int i=1;i<=30000;i++)
	{
		fa[i]=i;
		d[i]=0;
		num[i]=1;
	}
	while(t--)
	{
		char ch;
		cin>>ch;
		int u,v;
		cin>>u>>v;
		int f1=find(u);
		int f2=find(v);
		if(ch=='M')
		{
			fa[f1]=f2;
			d[f1]=num[f2];//
			num[f2]+=num[f1];
			num[f1]=0;
		}
		if(ch=='C')
		{
			if(f1!=f2)cout<<"-1"<<"\n";
			else cout<<abs(d[u]-d[v])-1<<"\n";	
		} 
	}	
  return 0;
}

