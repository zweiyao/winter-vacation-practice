#include<bits/stdc++.h>
using namespace std;
int m,n,k,l,d;
struct node{
	int no;
	int kid;
}a[1005],b[1005];
bool cmp(node a,node b)
{
	return a.kid>b.kid;
}
bool cmp1(node a,node b)
{
	return a.no<b.no;
}
int main()
{
	cin>>m>>n>>k>>l>>d;
	int x,y,p,q;
	for(int i=0;i<d;i++)
	{
		cin>>x>>y>>p>>q;
		if(x==p)//ап╦Н 
		{
			b[min(y,q)].kid++;
		}
		else
		{
			a[min(x,p)].kid++;
		}
	}
	for(int i=1;i<m;i++)
		a[i].no=i;
	for(int i=1;i<n;i++)
		b[i].no=i;
	sort(a+1,a+m,cmp);
	sort(a+1,a+k+1,cmp1);
	sort(b+1,b+n,cmp);
	sort(b+1,b+l+1,cmp1);
	for(int i=1;i<=k;i++)
	{
		cout<<a[i].no<<" ";
	}
	cout<<endl;
	for(int i=1;i<=l;i++)
	{
		cout<<b[i].no<<" ";
	}
	cout<<endl;
  return 0;
}

