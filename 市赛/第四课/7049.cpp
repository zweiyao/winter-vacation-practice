#include<bits/stdc++.h>
using namespace std;
struct Node{
	int x,y;
}node[105];
bool cmp(struct Node a,struct Node b)
{
	if(a.x==b.x) return a.y<b.y;
	return a.x<b.x;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>node[i].x>>node[i].y;
	}
	sort(node+1,node+n+1,cmp);
	int t=0;
	for(int i=1;i<=n;i++)
	{
		if(t<=node[i].x)
		{
			t=node[i].x;
			t+=node[i].y;
		}
		else
		{
			t+=node[i].y;
		}
	}
	cout<<t<<endl;
  return 0;
}

