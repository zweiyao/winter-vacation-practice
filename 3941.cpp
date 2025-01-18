#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin>>a>>b;
	char cal;
	cin>>cal;
	switch(cal)
	{
		case '+':
			cout<<a+b<<endl;
			break;
		case '-':
			cout<<a-b<<endl;
			break;
		case '*':
			cout<<a*b<<endl;
			break;
		case '/':
			cout<<fixed<<setprecision(3)<<(double)a/(double)b<<endl;
			break;
		default:
			cout<<"wrong"<<endl;
			break;
	}
	
	return 0;
}
