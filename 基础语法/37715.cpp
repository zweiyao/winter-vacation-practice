#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
	if(n==0)
	return 0;
	if(n>0)
	return 10*func(n/2)+n%2;
}
int main()
{
	int n;
	cin>>n;
	cout<<func(n)<<endl;
	return 0;
}
