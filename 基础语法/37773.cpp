#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
	}
	sort(a+1,a+n+1);
	reverse(a+1,a+n+1);
	sort(b+1,b+m+1);
	reverse(b+1,b+m+1);
	int i=1,j=1;
	int count=0;
	while(i<=n&&j<=m)
	{
		if(a[i]>b[j])
		{
			i++;
			j++;
			count+=2;
		}
		else
		{
			j++;
		}
	}
	if(j==m+1)
	count+=n-i+1;
	cout<<count<<endl;
	return 0;
}
