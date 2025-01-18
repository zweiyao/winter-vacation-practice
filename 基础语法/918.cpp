#include<bits/stdc++.h>
using namespace std;
int a[11];
int f[102];
int main()
{
	int des;
	for(int i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	cin>>des;
	memset(f,0x3f,sizeof(f));
	for(int i=1;i<=des;i++)
	{
		for(int j=10;j>=1;j--)
		{
			if(i-j<0)
			f[i]=min(f[i],a[i]);
			else
			f[i]=min(f[i],f[i-j]+a[j]);
		}
	}
	cout<<f[des]<<endl;
	return 0;
}
