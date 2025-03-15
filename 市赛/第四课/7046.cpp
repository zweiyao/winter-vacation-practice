#include<bits/stdc++.h>
using namespace std;
struct Node{
	int x,y;
}node[105]; 
int n;
int a[1005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>node[i].x>>node[i].y;
		a[node[i].x+1]++;
		a[node[i].y+1]--;
	}
	int cnt=0;
	for(int i=1;i<=1000;i++)
	{
		a[i]+=a[i-1];
		if(a[i]>0)cnt++;
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		int tmp=cnt;
		for(int j=node[i].x+1;j<=node[i].y;j++)
		{
			if(a[j]==1)tmp--;	
		}	
		ans=max(ans,tmp);
	}
	cout<<ans<<endl;
  return 0;
}

