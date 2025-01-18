#include<bits/stdc++.h>
using namespace std;
int money[13];
int main()
{
	int ret=1;
	cin>>ret;
	while(ret>=10)
	{
		int sum=1;
		cout<<ret<<' ';
		while(ret>0)
		{
			sum*=ret%10;
			ret=ret/10;
		}
		ret=sum;
	}
	cout<<ret<<endl;
	return 0;
} 
