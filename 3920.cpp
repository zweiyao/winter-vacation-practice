#include<bits/stdc++.h>
using namespace std;
int main()
{
	int weight;
	double price=0;
	cin>>weight;
	if(weight<=10)
	{
		price=2.5;
	}
	else
		price=2.5+(weight-10)*1.5;
	cout<<fixed<<setprecision(2)<<price<<endl;
	return 0;
}
