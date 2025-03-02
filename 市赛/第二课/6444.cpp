//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int a1[4],a2[4],a3[4];
//int ans1=0,ans2=0,ans3=0;
//int main()
//{
//	cin>>n;
//	a1[1]=1,a2[2]=1,a3[3]=1;
//	for(int i=1;i<=n;i++)
//	{
//		int x,y,z;
//		cin>>x>>y>>z;
//		swap(a1[x],a1[y]);
//		swap(a2[x],a2[y]);
//		swap(a3[x],a3[y]);
//		ans1+=a1[z];
//		ans2+=a2[z];
//		ans3+=a3[z];
//	}
//	cout<<max(ans1,max(ans2,ans3));
//  return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int f[4],d[4];
int maxn;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=3;i++)f[i]=i;
	while(n--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		swap(f[x],f[y]);
		d[f[z]]++;
	}
	for(int i=1;i<=3;i++)
	{
		maxn=max(maxn,d[i]);
	}
	cout<<maxn<<endl;
	return 0;
 } 
