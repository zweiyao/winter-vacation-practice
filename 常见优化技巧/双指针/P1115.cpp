#include<bits/stdc++.h>
using namespace std;
int n,f1=0,f2=0,ans=INT_MIN;
int a[200005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++)
	{
		f1=max(f2+a[i],a[i]);
		if(ans<f1)ans=f1;
		f2=f1;
	}
	cout<<ans<<endl;
	
	 
  return 0;
}

