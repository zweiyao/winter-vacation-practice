#include<bits/stdc++.h>
using namespace std;
string num[25];
bool cmp(string num1,string num2)
{
	return num1+num2>num2+num1;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	sort(num+1,num+n+1,cmp);
	for(int i=0;i<=n;i++)
	{
		cout<<num[i];	
	}
	cout<<endl;
	
	
	return 0;
}
