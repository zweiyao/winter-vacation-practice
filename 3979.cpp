#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num;
	int sum=0;
	cin>>n;
	int temp=n;
	while(n>0)
	{
		num=n%10;
		sum=sum*10+num;
		n=n/10;
	}
	if(sum==temp)
	cout<<"Yes"<<endl;
	else
	cout<<sum<<endl;
	return 0;
}
