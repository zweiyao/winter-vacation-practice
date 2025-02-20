#include<bits/stdc++.h>
using namespace std;
int a[25],b[25],s[25];
int main()
{//组合思想 
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	//第i个笼子选小狗
	for(int i=1;i<=n;i++)
	{
		int j=1;
		while(j<=n&&a[j]<=b[i])
		{
			s[i]++;
			j++;
		}

	 } 
	 long long ans=1;
	 for(int i=1;i<=n;i++)
	 {
	 	ans*=s[i]-i+1;
	 }
	 cout<<ans<<endl;
  return 0;
}

