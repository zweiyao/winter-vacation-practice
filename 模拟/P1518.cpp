#include<iostream>
using namespace std;
char a[11][11]; 
int x1,y1,x2,y2,t1=0,t2=0,cnt=0,f=0;
int dx[4]={-1,0,1,0}, dy[4]={0,1,0,-1};
int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			cin>>a[i][j]; 
			if(a[i][j]=='C')
			x1=i,y1=j,a[i][j]='.';
			if(a[i][j]=='F')
			x2=i,y2=j,a[i][j]='.';
		}
	}
	while(x1!=x2||y1!=y2)
	{
		cnt++;
		//niu
		int tx=x1+dx[t1];
		int ty=y1+dy[t1];
		if(a[tx][ty]=='.')
		{x1=tx;y1=ty;}
		else
		{
			t1++;
			t1%=4;
		}
		//Farmer
		tx=x2+dx[t2];
		ty=y2+dy[t2];
		if(a[tx][ty]=='.')
		{x2=tx;y2=ty;}
		else
		{
			t2++;
			t2%=4;
		}
		if(cnt>1e8)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	cout<<0<<endl;
	else
	cout<<cnt<<endl;
  return 0;
}

