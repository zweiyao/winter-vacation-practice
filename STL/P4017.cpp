#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> linker[5005];
int ind[5005],outd[5005];
queue<int> q;
int f[5005];
int main()
{
	memset(ind,0,sizeof(ind));
	memset(outd,0,sizeof(outd));
	cin>>n>>m;
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		outd[x]++,ind[y]++;	
		linker[x].push_back(y);
	}
	for(int i=1;i<=n;i++)
	{
		if(ind[i]==0)
		{
			q.push(i);
			f[i]=1;
		}
	}
	//ÍØÆËÅÅĞò 
	while(!q.empty())
	{
		int tmp=q.front();
		q.pop();
		for(int i=0;i<linker[tmp].size();i++)
		{
			ind[linker[tmp][i]]--;
			f[linker[tmp][i]]=(f[linker[tmp][i]]+f[tmp])%80112002;
			if(ind[linker[tmp][i]]==0)
			q.push(linker[tmp][i]);	
		}
	}	
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(outd[i]==0)
		ans=(ans+f[i])%80112002;
	}
	cout<<ans<<endl;
  return 0;
}

