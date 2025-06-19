#include<bits/stdc++.h>
using namespace std;
int row[100005],col[100005];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n+1][m+1];
		int maxn=0;
		int num=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]>maxn)
				{
					num=1;
					maxn=a[i][j];
				}
				else if(a[i][j]==maxn)num++;
			}
		}
		int ans=maxn;
		if(num==1)
		{
			ans--;
			cout<<ans<<"\n";
		 } 
		 else
		 {
		 	num=0;
		 	int x1,y1,x2,y2;
		 	int flag=0;
		 	for(int i=1;i<=n;i++)
		 	{
		 		for(int j=1;j<=m;j++)
		 		{
		 			if(maxn==a[i][j])
		 			{
		 				num++;
		 				if(num==1)
		 				{
		 					x1=i;
		 					y1=j;
						 }
						 if(num==2)
						 {
						 	x2=i;
						 	y2=j;
						 	flag=1;
						 	break;
						 }
					 }
				 }
				 if(flag==1)
				 {
				 	break;
				 }
			 }
			 
		 }
		
	}
	return 0;
}
