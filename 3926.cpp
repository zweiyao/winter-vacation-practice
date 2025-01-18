#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int max=a;
	int ret=1;
	if(b>max)
	{
		ret=2;
		max=b;
	}	
	if(c>max)
	{
		ret=3;
		max=c;
	}
	cout<<ret<<endl;
	return 0;
}
