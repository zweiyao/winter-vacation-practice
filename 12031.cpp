#include<bits/stdc++.h>
using namespace std;
int v[25];
int f[20001];
int main()
{
	int s,e;
	cin>>s>>e;
	for(int i=1;i<=s;i++)
	{
		cin>>v[i];
	}
	memset(f,0x3f,sizeof(f));
	f[0]=0;
	for(int i=1;i<=s;i++)
	{
		for(int j=1;j<=20000;j++)
		{
			for(int k=0;k<=e;k++)
			{if(j<k*v[i])break;
			f[j]=min(f[j],f[j-k*v[i]]+k);
			}
		}	
	}
	int ans=0,max=0;
	for(int i=1;i<=20000;i++)
	{
		if(f[i]<=e)
		{
			ans++;
		}
		else
		{
			if(ans>max)
			max=ans;
			ans=0;	
		}
	}
	cout<<max<<endl;
  return 0;
}

