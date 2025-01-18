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
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(shu(i)&&shu(n-i))
		{
			cout<<i<<"+"<<n-i<<endl;
		}
	}
	
	return 0;
}
