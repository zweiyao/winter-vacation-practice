#include<bits/stdc++.h>
using namespace std;
int f[200],g[200],ans[200];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string str1,str2;
		cin>>str1>>str2;
		memset(f,0,sizeof(f));
		for(int j=0;j<str1.size();j++)
		f[str1[j]]++;
		memset(g,0,sizeof(g));
		for(int j=0;j<str2.size();j++)
		g[str2[j]]++;
		for(int j='a';j<='z';j++)
		ans[j]+=max(f[j],g[j]);
	}
	for(int i='a';i<='z';i++)
	{
		cout<<ans[i]<<endl;
	}
  return 0;
}

