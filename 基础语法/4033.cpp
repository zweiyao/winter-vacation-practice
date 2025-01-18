#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	int x;
	int index=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			index=i+1;
			break;
		}
	}
	if(index==0)
	cout<<-1<<endl;
	else
	cout<<index<<endl;
	return 0;
}
