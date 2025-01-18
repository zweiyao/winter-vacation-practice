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
int reserve(int n)
{
	int num=0,sum=0;
	int temp=n;
	while(temp>0)
	{
		num=temp%10;
		temp=temp/10;
		sum=sum*10+num;
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	if(huiwen(n))
	{
		cout<<n<<endl;
	}
	else
	{
		while(!huiwen(n))
		{
			cout<<n<<"+"<<reserve(n)<<"="<<n+reserve(n)<<endl;
			n=n+reserve(n);
		}
	}
	
	return 0;
}
