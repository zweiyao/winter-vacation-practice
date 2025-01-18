#include<bits/stdc++.h>
using namespace std;
struct people{
	int index;
	int time;
}a[1005];
bool cmp(struct people b,struct people c)
{
	if(b.time==c.time)
	return b.index<c.index;
	return b.time<c.time;
}
int main()
{
	int n;
	cin>>n;
	double wait=0;
	for(int i=1;i<=n;i++)
	{
		a[i].index=i;
		cin>>a[i].time;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		cout<<a[i].index<<" ";
		wait+=a[i].time*(n-i);
	}
	cout<<endl;
	cout<<fixed<<setprecision(2)<<wait/n<<endl;
	return 0;
}
