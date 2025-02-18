#include<bits/stdc++.h>
using namespace std;
int n;
char s[100005];
int a[100005];
int cnt=0;
int ans=0;
bool check(int len)
{
	int p=1-len;//第一头牛可以放在1上
	int ret=0;
	for(int i=1;i<=cnt;i++)
	{
		while(p+2*len<=a[i])p+=len,ret++;
		p=a[i];
	 }
	 //最后一头牛后面还有空间,注意是加len 
	 while(p+len<=n)p+=len,ret++;
	 if(ret>=2)return true;
	 else return false; 
}
int main()
{
	cin>>n;
	cin>>s+1;//从一开始写
	for(int i=1;i<=n;i++)
	{
		if(s[i]=='1')
		{
			a[++cnt]=i;
		}
	 }
	 int l=1,r=n;//确定二分答案的区间 
	 for(int i=2;i<=cnt;i++)
	 {
	 	r=min(r,a[i]-a[i-1]);
	  } 
	while(l<=r)
	{
		int mid=(l+r)>>1;
		if(check(mid)){
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	cout<<ans;
  return 0;
}

