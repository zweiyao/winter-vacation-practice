#include<bits/stdc++.h>
using namespace std;
struct Node{
	int no,a,t,b;
}node[100005];
int count_z;
int ans[100005];
bool cmp(struct Node x,struct Node y)
{
	if(x.a==y.a)return x.no<y.no;
	return x.a<y.a;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		node[i].no=i;
		cin>>node[i].a>>node[i].t>>node[i].b;
	}
	sort(node+1,node+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		if(count_z<=node[i].a)
		{
			count_z=node[i].a;
			ans[node[i].no]=count_z;
			count_z+=node[i].t;		
		}
		else
		{
			if(count_z>node[i].a+node[i].b)
			{
				ans[node[i].no]=-1;
			}
			else
			{
				ans[node[i].no]=count_z;
				count_z+=node[i].t;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
  return 0;
}

