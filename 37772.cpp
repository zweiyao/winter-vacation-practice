#include<bits/stdc++.h>
using namespace std;
int a[30005];
int main()
{
	int w,n;
	cin>>w>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int i=1,j=n;
	int count=0;
	while(i<=j)
	{
		count++;
		if(a[i]+a[j]<=w)
		{
		
			i++;
			j--;
		}
		else
		{
		
			j--;
		}
	}
	cout<<count<<endl;
	return 0;
}
