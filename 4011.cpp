#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
	int num=0;
	if(n%5!=0)
	return 0;
	else
	{
	while(n>0)
	{
		num=n%10;
		n=n/10;
		if(num==5)
		return 1;
	}
	}
	return 0;
}
int main()
{
	int n=0,count=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(func(i))
		count++;
	}
	cout<<count<<endl;
	return 0;
}
