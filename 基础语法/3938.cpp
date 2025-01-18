#include<bits/stdc++.h>
using namespace std;
int main()
{
	char sex;
	double weight,height;
	cin>>sex>>height>>weight;
	if((sex=='M'&&weight>=45)||(sex!='M'&&height>=150))
	{
			cout<<"yes"<<endl;
	}
	else
	{
			cout<<"no"<<endl;
	}
	return 0;
	
}
