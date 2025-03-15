#include<bits/stdc++.h>
using namespace std;
#define maxn 1005
struct node{
	int x1,y1,x2,y2;
}a[maxn];
int b[maxn*4],c[maxn*4];
int btop=0,ctop=0;
int f[maxn*4][maxn*4];
map<int,int> m;
int main()
{
	int n;
	cin>>n;
	//统一离散 
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x1>>a[i].y1>>a[i].x2>>a[i].y2;
		b[++btop]=a[i].x1;
		b[++btop]=a[i].y1;
		b[++btop]=a[i].x2;
		b[++btop]=a[i].y2;
	}
	sort(b+1,b+btop+1);
	for(int i=1;i<=btop;i++)
	{
		if(b[i]!=b[i-1]||i==1)
		{
			c[++ctop]=b[i];
			m[b[i]]=ctop;
		}
	}
	for(int i=1;i<=n;i++)
	{//最后一个位置不涂 
		f[m[a[i].x1]][m[a[i].y1]]++;
		f[m[a[i].x2]][m[a[i].y2]]++;
		f[m[a[i].x1]][m[a[i].y2]]--;
		f[m[a[i].x2]][m[a[i].y1]]--;
	}
	long long ans=0;
	for(int i=1;i<ctop;i++)
	{
		for(int j=1;j<ctop;j++)
		{
			f[i][j]+=f[i-1][j]+f[i][j-1]-f[i-1][j-1];
			if(f[i][j])ans+=(long long)(c[i+1]-c[i])*(c[j+1]-c[j]);
		}
	}
	cout<<ans<<endl;
  return 0;
}

