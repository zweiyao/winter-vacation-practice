#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num;
	int flag=0;
	cin>>n;
	while(n>0)
	{
		num=n%10;
		if(num==3)
		flag=1;
		n=n/10;
	}
	if(flag==1)
	cout<<"LUCKY"<<endl;
	else
	cout<<"POOR"<<endl;
	return 0;
}
