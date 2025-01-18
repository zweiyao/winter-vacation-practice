#include<bits/stdc++.h>
using namespace std;
long fa[100],fb[100],lefa[100],lefb[100];//上车人数 
int main()
{
	long a,n,m,x,b;
	long sum=a;
	cin>>a>>n>>m>>x;
	fa[1]=1,fb[1]=0,lefa[1]=1,lefb[1]=0;
	fa[2]=0,fb[2]=1,lefa[2]=1,lefb[2]=0;
	if(x==n)
	cout<<0<<endl;
	//n>x
	else if(x==1||x==2)
	cout<<a<<endl;
	else
	{
		for(int i=3;i<n;i++)
		{
			fa[i]=fa[i-1]+fa[i-2];
			fb[i]=fb[i-1]+fb[i-2];//上车系数符合fibnacci 
			lefa[i]=lefa[i-1]+fa[i]-fa[i-1];
			lefb[i]=lefb[i-1]+fb[i]-fb[i-1];
		}
		if((m-lefa[n-1]*a)%lefb[n-1]!=0)
		{
			cout<<"No answer."<<endl;
			exit(0);
		}
		b=(m-lefa[n-1]*a)/lefb[n-1];//可能不能整除 
		cout<<lefa[x]*a+lefb[x]*b<<endl;
	}
	return 0;
}
