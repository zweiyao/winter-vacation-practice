#include<bits/stdc++.h>
using namespace std;
int main()
{
	double num;
	double sum=0;
	int count=0;
	int max,min;

	cin>>num;
	if(num==-1)
	{
		cout<<fixed<<setprecision(2)<<sum<<endl;
		return 0;
	}
	max=min=num;
	sum+=num;
	count++;
	
	while(cin>>num)
	{
		if(num==-1)
		break;
		sum+=num;
		count++;
		if(num>max)
		max=num;
		if(num<min)
		min=num;
	}
	if(count==1)
	cout<<fixed<<setprecision(2)<<sum<<endl;
	if(count>=2)
	cout<<fixed<<setprecision(2)<<(sum-max-min)/(count-2)<<endl;
	return 0;
}
