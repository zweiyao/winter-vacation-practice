#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
struct node{
	int x,y,z;
}a[maxn];
int b[maxn*2],c[maxn*2];
map<int,int> m;
int fa[maxn*2];
int find(int x)
{
	if(x!=fa[x])
	return fa[x]=find(fa[x]);
	return x;
}
void merge(int x,int y)
{
	x=find(x),y=find(y);
	if(x!=y)fa[x]=y;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		//³õÊ¼»¯
		m.clear(); 
		int n;
		cin>>n;
		int btop=0,ctop=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i].x>>a[i].y>>a[i].z;
			b[++btop]=a[i].x;
			b[++btop]=a[i].y;
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
		{
			a[i].x=m[a[i].x];
			a[i].y=m[a[i].y];
		}
		for(int i=1;i<=ctop;i++)fa[i]=i;
		for(int i=1;i<=n;i++)
		{
			if(a[i].z)
			merge(a[i].x,a[i].y);
		}
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i].z==0)
			{
				if(find(a[i].x)==find(a[i].y))
						{
							flag=-1;
							break;	
						}
			}
		}
		if(flag==-1)cout<<"NO"<<"\n";
		else cout<<"YES"<<"\n";
	}		
  return 0;
}

