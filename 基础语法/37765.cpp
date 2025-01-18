#include<bits/stdc++.h>
using namespace std;
int n,k;
int work()
{
	int times=0,p;
	for(int i=1;i<=n;i++)
	{
		p=rand()%2;
		if(p==1)
		times++;
	}
	return times;
}
int main()
{
	cin>>n>>k;
	int num,ans=0;
	srand(time(0));
	for(int i=1;i<=100000;i++)
	{
		num=work();
		if(num>=k)
		ans++;
	}
	double t=1.0*ans/100000;
	cout<<fixed<<setprecision(2)<<t<<endl;
	return 0;
}
