#include<bits/stdc++.h>
using namespace std;
int mon(int y,int m)
{
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		return 31;
	else if(m==2)
	{
		if(y%400==0||y%4==0&&y%100!=0)
		return 29;
		else
		return 28; 
	}
	else
	return 30;
}
int main()
{
	int y,m,d;
	int day=0;
	cin>>y>>m>>d;
	for(int i=1;i<m;i++)
	{
		day+=mon(y,i);
	}
	day+=d;
	cout<<day<<endl;
	return 0;
}
