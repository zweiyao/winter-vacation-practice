#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1005];
	int b[1005];
	char tmp;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		if(tmp=='G')
		a[i]=1;
		if(tmp=='H')
		a[i]=0;	
	}
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		if(tmp=='G')
		b[i]=1;
		if(tmp=='H')
		b[i]=0;	
	}
	int l=1,r=1;
	int s=0;
	while(l<=r&&l<=n&&r<=n)
	{
		while(a[l]==b[l]&&l<=n)l++;
		if(l==n+1)break;
		r=l;
		while(a[r]!=b[r]&&r<=n)r++;
		l=r;
		s++;
	}
	cout<<s<<endl;
	
  return 0;
}

