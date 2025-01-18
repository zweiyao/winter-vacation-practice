#include<bits/stdc++.h>
using namespace std;
//bool pss(int n)
//{
//	if(n<2)
//	return 0;
//	for(int i=2;i*i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
int a[1005];
int main()
{
	memset(a,0,sizeof(a));
	int n,k,s=0;
	cin>>n>>k;
	for(int i=2;i<=n;i++)
	{
		if(a[i]==0)
		{
		for(int j=i;j<=n;j+=i)
			{
				if(a[j]==0)
				{
					a[j]=1;//1代表划掉了
					s++;
				}
				if(s==k)
				{
					cout<<j<<endl;
					exit(0);
				}
			}
		}
	}
	return 0;
}
