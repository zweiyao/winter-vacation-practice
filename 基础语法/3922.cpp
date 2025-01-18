#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int count=0;
	if(a%2==0)
	count++;
	if(b%2==0)
	count++;
	if(c%2==0)
	count++;
	cout<<count<<endl;
	return 0;
	
}
