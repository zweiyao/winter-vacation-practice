#include<bits/stdc++.h>
using namespace std;
int func(int n,int k)
{
	int num=0;
	while(n>0)
	{
		num=n%10;
		n=n/10;
		if(num==k)
		return 1;
	}
	return 0;
}
int main()
{
	int n=0,k=0,num=0,count=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		if(func(num,k))
		{
			count++;
			cout<<num<<endl;
		}
	}
	if(count==0)
	{
		cout<<"POOR"<<endl;
	}
	return 0;
}
