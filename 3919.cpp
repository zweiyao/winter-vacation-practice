#include<bits/stdc++.h>
using namespace std;
int main()
{
	int price;
	cin>>price;
	double ret;
	if(price<300)
		ret=price;
	else
		ret=price*0.9;
	cout<<fixed<<setprecision(2)<<ret<<endl;	
	
	return 0;
	
}
