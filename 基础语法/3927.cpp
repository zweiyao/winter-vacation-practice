#include<bits/stdc++.h>
using namespace std;
int main()
{
	double m;
	int ret=1;
	cin>>m;
	double a=(m/5)*60;
	double b=(m/15)*60+5;
	double c=(m/35)+10;
	double min=a;
	if(b<min)
	{
		ret=2;
		min=b;
	}
	if(c<min)
	{
		ret=3;
		min=c;
	}
	if(ret==1)
		cout<<"WALK"<<endl;
	if(ret==2)
		cout<<"BIKE"<<endl;
	if(ret==3)
		cout<<"CAR"<<endl;
	return 0;
} 
