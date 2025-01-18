#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int gold=0,silver=0,copper=0;
	int sum_1=0,sum_2=0,sum_3=0;
	double sum=0,avg=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>gold>>silver>>copper;
		sum_1+=gold;
		sum_2+=silver;
		sum_3+=copper;
		sum+=gold+silver+copper;
	}
	cout<<sum_1<<endl<<sum_2<<endl<<sum_3<<endl<<sum<<endl;
	return 0;
} 
