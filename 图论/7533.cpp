#include<bits/stdc++.h>
using namespace std;
int n,a[2505],color[2505],sum[2];
vector<int> m[2505];
void dfs(int x,int c,int pre)
{//¶þ·ÖÍ¼È¾É« 
	color[x]=c;
	sum[c]+=a[x];
	for(int i=0;i<m[x].size();i++)
	{
		int y=m[x][i];
		if(y==pre)continue;
		dfs(y,c^1,x);
	}
 } 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		m[x].push_back(y);
		m[y].push_back(x);
	}
	dfs(1,0,0);
	sum[0]%=12;sum[1]%=12;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		int c=color[i];
		int x=(sum[c]-sum[c^1]+12)%12;
		if(x==0||x==1)ans++;
	}
	cout<<ans<<endl;
  return 0;
}

