#include<bits/stdc++.h>
using namespace std;
int money[13];
int main()
{
	int ret=0;//表示手上有的钱 
	int cun=0;//表示存的钱 
	for(int i=1;i<=12;i++)
	{	
		ret+=300;
		cin>>money[i];
		ret=ret-money[i];
		if(ret<0)
		{
			cout<<"-"<<i<<endl;
			exit(0);
		}
		cun+=ret/100*100;
		ret=ret%100;
	}
	cout<<cun*1.2+ret<<endl;//还要加上手上剩余的钱 
	return 0;
} 
