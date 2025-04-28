#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int n;
const int M=1e4;
int hx[20111],hy[20111];
int numx[20111],numy[20111];
ll ans=0;
struct Node{
	int x,y;
}node[100005];
void rotate()
{
	for(int i=1;i<=n;i++)
	{
		int tx=node[i].x;
		int ty=node[i].y;
		node[i].x=(-1)*ty;
		node[i].y=tx;
	}
}
bool cmp(Node s1,Node s2)
{
	if(s1.x==s2.x)return s1.y<s2.y;
	return s1.x<s2.x;
}
void solve()
{
	memset(hx,0,sizeof(hx));
	memset(hy,0,sizeof(hy));
	memset(numx,0,sizeof(numx));
	memset(numy,0,sizeof(numy));
	sort(node+1,node+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		ll dx=numy[node[i].y+M]*node[i].x-hy[node[i].y+M];
		ll dy=numx[node[i].x+M]*node[i].y-hx[node[i].x+M];
		ans=(ans%mod+((dx%mod)*(dy%mod))%mod)%mod;
		numy[node[i].y+M]++,numx[node[i].x+M]++;
		hy[node[i].y+M]+=node[i].x;
		hx[node[i].x+M]+=node[i].y;
	}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>node[i].x>>node[i].y;
	}
	for(int i=0;i<4;i++)
	{
		solve();
		rotate();
	}
	cout<<ans<<endl;
	return 0;
}

