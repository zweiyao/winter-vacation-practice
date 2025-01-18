#include<bits/stdc++.h>
using namespace std;
int gys(int a,int b)
{
	int r=0;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	if(a%b==0)
	cout<<a/b<<endl;
	else if(a<b)
	{
		cout<<a/gys(a,b)<<"/"<<b/gys(a,b)<<endl;
	}
	else
	{
		int c=a/b;
		cout<<c<<"+"<<(a-c*b)/gys(a-c*b,b)<<"/"<<b/gys(a-c*b,b)<<endl;	
	}
	return 0;
}
