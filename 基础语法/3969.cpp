#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int flag=0;
	cin>>n;
	if(n==1)
	flag=1;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	cout<<"T"<<endl;
	else
	cout<<"F"<<endl;
	return 0;
}
