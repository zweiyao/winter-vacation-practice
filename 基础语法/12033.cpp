#include<bits/stdc++.h>
using namespace std;
int a[40005];//代表能不能走
int f[40005]; 
int main()
{
	int e,l,b,x;
	cin>>e>>l>>b;
	for(int i=0;i<b;i++)
	{
		cin>>x;
		a[x]=1;
		f[x]=0x3f;
	}
	memset(f,0x3f,sizeof(f));
	f[0]=0;
	for(int i=1;i<=e;i++)
	{
		for(int j=l;j>=0;j--)
		{
			if(i-j<0)
			continue;
			if(a[i]==0)
			f[i]=min(f[i],f[i-j]+1);
		}
	}
	cout<<f[e]<<endl;
	return 0;
}
