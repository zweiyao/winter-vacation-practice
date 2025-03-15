#include<bits/stdc++.h>
using namespace std;
int load[10005];
int f[105][105];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>load[i];
	 } 
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=1;j<=n;j++)
	 	{
	 		cin>>f[i][j];
		}
	 }
	 for(int k=1;k<=n;k++)
	 {
	 	for(int i=1;i<=n;i++)
	 	{
	 		for(int j=1;j<=n;j++)
	 		{
	 			f[i][j]=min(f[i][j],f[i][k]+f[k][j]);
			 }
		 }
	 }
	 int ans=0,pre=1;
	 for(int i=1;i<=m;i++)
	 {
	 	ans+=f[pre][load[i]];
	 	pre=load[i];
	 }
	 cout<<ans<<endl;
  return 0;
}

