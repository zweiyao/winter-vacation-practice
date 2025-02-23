#include<bits/stdc++.h>
using namespace std;
int n;
string str[9]={"1","Bessie","Buttercup","Belinda","Beatrice","Bella","Blue","Betsy","Sue"};
int a[10],b[10],x[10],s[10];
int vis[9];
int ans=INT_MAX;
void check()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=8;j++)
		{
			if(x[j]==a[i])
			{
				if(x[j-1]!=b[i]&&x[j+1]!=b[i])
				return;
			}
		}
	}
//	for(int i=1;i<=8;i++)
//	cout<<str[x[i]]<<endl;
	int tmp=0;
	for(int i=1;i<=8;i++)
	tmp=tmp*10+x[i];
	if(tmp<ans)
	{
		ans=tmp;
		for(int i=1;i<=8;i++)
		{
			s[i]=x[i];
		}
	}
}
void dg(int dep)
{
	if(dep>8)
	{
		check();
		return;
	}
	else
	{
		for(int i=1;i<=8;i++)
		{
			if(vis[i]==0)
			{
				vis[i]=1;
				x[dep]=i;
				dg(dep+1);
				vis[i]=0;
			}
		}
	}
}
int main()
{
	cin>>n;
	sort(str+1,str+8+1);
	for(int i=1;i<=n;i++)
	{
		string tmp;
		cin>>tmp;
		for(int j=1;j<=8;j++)
		{
			if(str[j]==tmp)
			a[i]=j;
		}
		for(int j=1;j<=5;j++)
		cin>>tmp;
		for(int j=1;j<=8;j++)
		{
			if(str[j]==tmp)
			b[i]=j;
		}	
	}
	dg(1);
	for(int i=1;i<=8;i++)
	cout<<str[s[i]]<<endl;
  return 0;
}

