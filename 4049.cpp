#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long pre=a[0],cur=a[0];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cur=a[i];
		if(pre==cur)
		{
			count++;
			if(i==n-1)
			{
				cout<<cur<<" "<<count<<endl;
			}
		}
		else
		{
			cout<<pre<<" "<<count<<endl;
			count=1;
			if(i==n-1)
			{
				cout<<cur<<" "<<count<<endl;
			}
		}
		pre=cur;
	}
	return 0;
}
