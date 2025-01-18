#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%400==0)
	cout<<"yes"<<endl;
	else
	{
		if(n%4==0)
		{
			if(n%100==0)
			{
				cout<<"no"<<endl;	
			}
			else
			{
				cout<<"yes"<<endl;
			}
		}
		else
			cout<<"no"<<endl;
	}
	return 0;
}
