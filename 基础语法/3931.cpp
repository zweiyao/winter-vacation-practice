#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	if(num==3)
	{
		int a,b,c=0;
		cin>>a>>b>>c;
		int ret=a+b+c;
		if(ret%2==0)
		cout<<ret<<" shi ou shu!"<<endl;
		else
		cout<<ret<<" shi ji shu!"<<endl;
	}
	else 
	cout<<num;
	return 0;
}
