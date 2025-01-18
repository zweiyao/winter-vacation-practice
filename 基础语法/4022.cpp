#include<bits/stdc++.h>
using namespace std;
int shu(int num)
{
	if(num==1)
	return 0;
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
		return 0;
	}
	return 1;
}
int huiwen(int n)
{
	int num=0,sum=0;
	int temp=n;
	while(temp>0)
	{
		num=temp%10;
		temp=temp/10;
		sum=sum*10+num;
	}
	if(sum==n)
	return 1;
	else
	return 0;
}
int main()
{
	int n;
	int count=0;
	while(cin>>n)
	{
		if(n==-1)
		break;
		if(huiwen(n)&&shu(n))
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
