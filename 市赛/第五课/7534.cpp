#include<bits/stdc++.h>
using namespace std;
int n,k; 
int a[1005],b[1005];
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>b[i]; 
	int ans=0;
	for(int i=1;i<=1000;i++)
	{
		int num=0;
		for(int j=1;j<=n;j++)
		{
			num+=b[j]/i;	
		}
		if(num<k/2)break;
		num-=k/2;
		if(num>=k/2)
		ans=max(ans,k/2*i);
		else
		{
			int x=k/2-num;
			int now=num*i;
			if(n<=x)continue;
			for(int j=1;j<=n;j++)
			a[j]=b[j]%i;
			sort(a+1,a+n+1);
			for(int j=1;j<=x;j++)
			now+=a[n-j+1];
			ans=max(ans,now);
		}
	}
	cout<<ans<<endl;
  return 0;
}

