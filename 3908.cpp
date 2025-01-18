#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int ret=num/100+num/10%10*10+num%10*100;
	cout<<ret;
	return 0;
	
}
