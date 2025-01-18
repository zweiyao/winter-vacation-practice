#include<bits/stdc++.h>
using namespace std;
void hannuo(int n,char a,char b,char c)
{
	if(n==0)
	return ;
	hannuo(n-1,a,c,b);//n-1´Óa->c->b 
	cout<<a<<" To "<<c<<endl;//1->a->c
	hannuo(n-1,b,a,c);
}
int main()
{
	int n;
	cin>>n;
	hannuo(n,'A','B','C');
	return 0;
}
