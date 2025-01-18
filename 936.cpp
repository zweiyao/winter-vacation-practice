#include<bits/stdc++.h> 
using namespace std;
int a[1050],f[1050][3];
int main()
{
	int n;
	memset(f,0,sizeof(f));
	cin>>n;
	int x=0,b=0,c=0;
	cin>>a[1];
	if(a[1]%3==0)
	{
		f[1][0]=1;
	}
	else if(a[1]%3==1)
	{
		f[1][1]=1;
	}
	else if(a[1]%3==2)
	{
		f[1][2]=1;
	}		
	for(int i=2;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%3==0)
		{
			f[i][0]=f[i-1][0]+1;
			if(f[i-1][1]!=0)
			f[i][1]=f[i-1][1]+1;
			if(f[i-1][2]!=0)
			f[i][2]=f[i-1][2]+1;
		}
		else if(a[i]%3==1)
		{
			x=f[i-1][0];
			b=f[i-1][1];
			c=f[i-1][2];
			if(c!=0)
			f[i][0]=max(f[i-1][0],c+1);
			f[i][1]=max(f[i-1][1],x+1);
			if(b!=0)
			f[i][2]=max(f[i-1][2],b+1);
		}
		else if(a[i]%3==2)
		{
			x=f[i-1][0];
			b=f[i-1][1];
			c=f[i-1][2];
			if(b!=0)
			f[i][0]=max(f[i-1][0],b+1);
			if(c!=0)
			f[i][1]=max(f[i-1][1],c+1);
			f[i][2]=max(f[i-1][2],x+1);
		}		
	}
	cout<<f[n][0]<<endl;
	return 0;
}
