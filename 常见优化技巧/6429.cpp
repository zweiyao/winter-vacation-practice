#include<bits/stdc++.h>
using namespace std;
int n,l1,r1,l2,r2,s,len,t,k;
vector<int> a;
map<vector<int>,int>f;
void work()
{
	for(int i=1;i<=(r1-l1+1)/2;i++)
	swap(a[l1+i-1],a[r1-i+1]);
	for(int i=1;i<=(r2-l2+1)/2;i++)
	swap(a[l2+i-1],a[r2-i+1]);
}
//找循环节,用map去记录节点 
int main()
{
	cin>>n>>k;
	cin>>l1>>r1>>l2>>r2;
	for(int i=0;i<=n;i++)
	a.push_back(i);
	f[a]=0;
	while(1)
	{
		work();
		t++;
		if(f.find(a)!=f.end())
		{
			s=f[a];//循环开始的点 
			len=t-f[a];//循环长度 
			break;
		}
		f[a]=t;
	}
	for(int i=1;i<=n;i++)
	a[i]=i;
	if(k<=s)while(k--) work();
	else
	{
		k-=s;
		while(s--)work();
		k%=len;
		while(k--)work();
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<endl;
	}
  return 0;
}

