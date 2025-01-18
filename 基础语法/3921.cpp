#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,ret;
	cin>>n>>m;
	if(n%m==0)
	ret=n/m;
	else
	ret=n/m+1;
	cout<<ret<<endl;
	return 0;
} 
