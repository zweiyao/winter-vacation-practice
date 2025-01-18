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
	for(int i=2;i<=n/3;i++)
	{
		for(int j=i;j<=(n-i)/2;j++)//±£³Öi<=j<=kµÄË³Ðò 
		{
			if(shu(i)&&shu(j)&&shu(n-i-j))
			{
				cout<<n<<"="<<i<<"+"<<j<<"+"<<n-i-j<<endl;
			}
		}
	}
	
	return 0;
}
