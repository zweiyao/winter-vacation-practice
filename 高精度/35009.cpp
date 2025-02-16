#include<bits/stdc++.h>
using namespace std;
int a[10005],c[10005];
int main()
{
	a[0]=1;
	c[0]=2;
	int n;
	cin>>n;
	int la=n+10;//多开几位防止后面高精加进位 
	int y=0;
	for(int i=2;i<=4000;i++)
	{
		y=0;
		for(int j=0;j<la;j++)
		{
			y=y*10+a[j];
			a[j]=y/i;
			y%=i;
		}
		int jw=0;
		for(int j=la-1;j>=0;j--)
		{
			c[j]=c[j]+a[j]+jw;
			jw=c[j]/10;
			c[j]%=10;
		}
	}
	cout<<c[0]<<".";
	for(int i=1;i<=n;i++)
	cout<<c[i];
  return 0;
}

