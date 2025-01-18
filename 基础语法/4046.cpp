#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int num;
	int a[n+1];
	memset(a,0,sizeof(a));
	for(int i=0;i<m;i++)
	{
		cin>>num;
		a[num]++;
	}
	int max=0,index=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			index=i;
		}
		
	}
	cout<<index<<endl;
	return 0;
}
