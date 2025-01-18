#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num,flag=0;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++)
	{
		flag=0;
		cin>>num;
		if(num==1)
		flag=1;
		for(int j=2;j*j<=num;j++)
		{
			if(num%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<num<<endl;
			count++;
		}
	}
	if(count==0)
	{
		cout<<count<<endl;
	}
	return 0;
	
}
