#include<bits/stdc++.h>
using namespace std;
int a,b,n;
int x[1005][1005],q[1005];
int rowmax[1005][1005],rowmin[1005][1005];
int colmax[1005][1005],colmin[1005][1005];
int main()
{
	cin>>a>>b>>n;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			cin>>x[i][j];
		}
	}
	//对每行维护单调队列 
	for(int i=1;i<=a;i++)
	{
		int head=0,tail=0;
		for(int j=1;j<=b;j++)
		{
			while(head<tail&&q[head]+n<=j)
				head++;
			while(head<tail&&x[i][q[tail-1]]<x[i][j])
			tail--;
			q[tail]=j;tail++;
			if(j>=n)rowmax[i][j-n+1]=x[i][q[head]];	
		}
		head=0,tail=0;
		for(int j=1;j<=b;j++)
		{
			while(head<tail&&q[head]+n<=j)
				head++;
			while(head<tail&&x[i][q[tail-1]]>x[i][j])
				tail--;
			q[tail]=j;tail++;
			if(j>=n)rowmin[i][j-n+1]=x[i][q[head]];	
		}
	}
	//对每列求单调队列 
	for(int i=1;i<=b-n+1;i++)
	{
		int head=0,tail=0;
		for(int j=1;j<=a;j++)
		{
			while(head<tail&&q[head]+n<=j)
				head++;
			while(head<tail&&rowmax[q[tail-1]][i]<rowmax[j][i])
				tail--;
			q[tail]=j;tail++;
			if(j>=n)colmax[j-n+1][i]=rowmax[q[head]][i];	
		}
		head=0,tail=0;
		for(int j=1;j<=a;j++)
		{
			while(head<tail&&q[head]+n<=j)
				head++;
			while(head<tail&&rowmin[q[tail-1]][i]>rowmin[j][i])
				tail--;
			q[tail]=j;tail++;
			if(j>=n)colmin[j-n+1][i]=rowmin[q[head]][i];	
		}
	} 
	long long ans=0;
	for(int i=1;i<=a-n+1;i++)
	{
		for(int j=1;j<=b-n+1;j++)
		{
			if(colmax[i][j]-colmin[i][j]<ans)
			ans=colmax[i][j]-colmin[i][j];
		}
	}
	cout<<ans;
  return 0;
}

