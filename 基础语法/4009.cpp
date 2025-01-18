#include<bits/stdc++.h>
using namespace std;
int sum_yueshu(int n)
{
	int sum=0;
	for(int j=1;j*j<=n;j++)
	{
		if(n%j==0)
		{
			if(j==1||j*j==n)
				sum+=j;
			else
				sum+=j+n/j;
		}
	}
	return sum;
}
int luanshen(int n)
{
	int sum=0;
	int temp=n;
	for(int i=0;i<2;i++)//求两次约束和 
	{
		sum=0;
		sum=sum_yueshu(temp);
		if(sum==temp)
		return 0;
		temp=sum;
	}
	if(sum==n)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	for(int i=1;i<=10000;i++)
	{
		if(luanshen(i))
		if(i<sum_yueshu(i)){
			cout<<i<<" "<<sum_yueshu(i)<<endl;
		}
	}
	return 0;
	
}
