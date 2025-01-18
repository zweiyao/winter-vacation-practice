#include<bits/stdc++.h>
using namespace std;
int main()
{
	double m;
	cin>>m;
	double num;
	int sum=0;
	while(cin>>num)
	{
		if(num==-1)
		break;
		sum+=num;
	}
	cout<<(int)(sum/m)<<endl;
	return 0;
}
