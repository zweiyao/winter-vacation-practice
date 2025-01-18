#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	int sum=0;
	while(cin>>num)
	{
		sum=sum*10+num;
	}
	cout<<sum-1<<endl;
	return 0;
}
