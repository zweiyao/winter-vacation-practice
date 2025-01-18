#include<bits/stdc++.h>
using namespace std;
int n;
int work()
{
	int times=0,p;
	for(int i=1;i<=n;i++)
	{
		p=rand()%3;
		if(p==0)
		times+=0;
		else if(p==1)
		times+=2;
		else if(p==2)
		times+=3;
	}
	return times;
}
int main()
{
	cin>>n;
	int num,ans=0;
	srand(time(0));
	for(int i=1;i<=100000;i++)
	{
		num=work();
		ans+=num;
	}
	double t=1.0*ans/100000;
	cout<<fixed<<setprecision(0)<<t<<endl;
	return 0;
}
