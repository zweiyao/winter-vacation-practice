#include<bits/stdc++.h>
using namespace std;
int h[50005],log_2[50005];
int a,b;	
int n,q;
int f_m[32][50005],f_i[32][50005];
void init()
{
	for(int i=1;i<=n;i++)
	{
		f_m[0][i]=h[i];
		f_i[0][i]=h[i];
	}
	for(int i=1;(1<<i)<=n;i++)
	{
		for(int j=1;j<=n-(1<<i)+1;j++)
		{
			f_m[i][j]=max(f_m[i-1][j],f_m[i-1][j+(1<<(i-1))]);
			f_i[i][j]=min(f_i[i-1][j],f_i[i-1][j+(1<<(i-1))]);
		}
	}
}
int main()
{
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>h[i];
	 } 
	 for(int i=2;i<=n;i++)
	 {
	 	log_2[i]=log_2[i>>1]+1;
	 }
	 init();
	 int a,b;
	 while(q--)
	 {
	 	cin>>a>>b;
	 	int len=b-a+1;
	 	int ans=max(f_m[log_2[len]][a],f_m[log_2[len]][b-(1<<log_2[len])+1])-min(f_i[log_2[len]][a],f_i[log_2[len]][b-(1<<log_2[len])+1]);
		 cout<<ans<<endl;
	 }
  return 0;
}

