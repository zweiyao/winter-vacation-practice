#include<bits/stdc++.h>
using namespace std;
int n;
int f[15];
int work()
{
	int k=0;
	int times=0,p,f1=0,f2=0;
	memset(f,0,sizeof(f));
	while(k<n)
	{
		times++;
		p=rand()%n+1;
		if(f[p]==0)
		{
			f[p]=1;
			k++;
		}
	}
	return times;
}
int main()
{
	cin>>n;
	int num;
	long long ans=0;
	srand(time(0));
	for(int i=1;i<=100000;i++)
	{
		num=work();
		ans+=num;
	}
	double t=1.0*ans/100000;
	cout<<fixed<<setprecision(1)<<t<<endl;
	return 0;
}
