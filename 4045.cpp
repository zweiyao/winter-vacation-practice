#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1001],b[1001];
	int n;
	int num;
	cin>>n;
	memset(a,0,sizeof(a));
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		a[num]++;
	}
	for(int i=1000;i>=0;i--)
	{
		if(a[i]>0)
		{
			b[count++]=i;
		}
	}
	cout<<count<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	return 0;
}
