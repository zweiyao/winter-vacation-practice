#include<bits/stdc++.h>
using namespace std;
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
	for(int i=1;i<=10000;i++)
	{
		if(huiwen(i))
		{
			cout<<setw(10)<<i;
		}
	}
	return 0;
}
