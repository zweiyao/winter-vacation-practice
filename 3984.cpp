#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	double sum=0;
	int count=0;
	while(cin>>num)
	{
		if(num==-1)
		break;
		if(num%2==0)
		{
			sum+=num;
			count++;
		}
	}
	if(count==0)
	cout<<fixed<<setprecision(2)<<sum<<endl;
	else
	cout<<fixed<<setprecision(2)<<sum/count<<endl;
	return 0;
}
