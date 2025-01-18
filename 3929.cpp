#include<bits/stdc++.h>
using namespace std;
int main()
{
	double price;
	double tax;
	cin>>price;
	if(price>=10000)
		tax=price*0.05;
	else if(price<10000&&price>=5000)
		tax=price*0.03;
	else if(price<5000&&price>=1000)
		tax=price*0.02;
	else
		tax=0;
	cout<<"Tax="<<fixed<<setprecision(2)<<tax<<"yuan"<<endl;
	return 0;
}
