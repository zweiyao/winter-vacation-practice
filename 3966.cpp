#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int num=0;
	int sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		if(num%10==0)
		{
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
} 
