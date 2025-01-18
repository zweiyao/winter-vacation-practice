#include<bits/stdc++.h>
using namespace std;
int sum_shuzi(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
	return sum;
}
int main()
{
	int count;
	for(int i=1;i<=1000;i++)
	{
		if(sum_shuzi(i)==13)
		{
			cout<<i<<" ";
			count++;
			if(count%8==0)
			{
				count=0;
				cout<<endl;
			}
		}
	}
	return 0;
}
