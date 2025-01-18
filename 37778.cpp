#include<bits/stdc++.h>
using namespace std;
int a[10500];
int main()
{
	int n,k;
	int sum=0;//表示第i个加油站到第j个加油站的距离
	int count=0;
	cin>>n>>k;
	for(int i=1;i<=k+1;i++)
	{
		cin>>a[i];
		if(a[i]>n)
		{
			cout<<"No Solution"<<endl;
			return 0;
		}
	} 
	for(int i=0;i<=k;i++)
	{
		sum+=a[i+1];
		if(n<sum)
		{
			count++;
			sum=a[i+1];//加完油后开到i+1号停车场 
		}
	}
	cout<<count<<endl;
	return 0;
}
