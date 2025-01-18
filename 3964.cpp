#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double score;
	double sum=0,avg=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>score;
		sum+=score;
	}
	cout<<fixed<<setprecision(2)<<sum<<" "<<sum/n<<endl;
	return 0;
} 
