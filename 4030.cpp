#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>str[i];
	}
	for(int i=n-(n%3);i>0;i=i-3)
	{
		cout<<str[i]<<endl;
	}
	return 0;
}
