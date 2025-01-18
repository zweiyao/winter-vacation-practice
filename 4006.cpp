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
	for(int i=1;i<=1000;i++)
	{
		if(shu(i))
		cout<<setw(8)<<i;
	}
	cout<<endl;
	return 0;
}
