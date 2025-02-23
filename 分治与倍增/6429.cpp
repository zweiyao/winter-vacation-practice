#include<bits/stdc++.h>
using namespace std;
int a[102][102],cnt[102],ans[102];
int main()
{
	int n,k,a1,a2,b1,b2;
	cin>>n>>k>>a1>>a2>>b1>>b2;
	for(int i=1;i<=n;i++)
	{
		int x=i;
		do{
			if(x>=a1&&x<=a2)
			x=a2-x+a1;
			if(x>=b1&&x<=b2)
			x=b2-x+b1;
			a[i][++cnt[i]]=x;
		}while(x!=i);//ÕÒÑ­»·½á 
		int tmp=k%cnt[i];
		if(tmp)ans[a[i][tmp]]=i;
		else ans[a[i][cnt[i]]]=i;
	}
	for(int i=1;i<=n;i++)
	cout<<ans[i]<<"\n";
  return 0;
}

