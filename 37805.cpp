#include<bits/stdc++.h>
using namespace std;
set<int> ret;
queue<int> q;
bool pss(int n)
{
	if(n<2)
	return false;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int x;
	cin>>x;
	//个位数是13579的才可能是超级素数
	 q.push(2);
	 q.push(3);
	 q.push(5);
	 q.push(7);
	 int temp;
	 while(!q.empty())
	 {
	 	//超级素数就入队，
		//依次作为前缀和13579拼接生成超级素数 
		temp=q.front();
		for(int i=1;i<=9;i+=2)
		{
			if(pss(temp*10+i)&&(temp*10+i)<x)
			{
				q.push(temp*10+i);
			}
		}
		ret.insert(temp);
		q.pop();
	 }
	cout<<ret.size()<<endl;
	set<int>::iterator it;
	for(it=ret.begin();it!=ret.end();it++)
	{
		cout<<*it<<endl;
	}
//	for(int i=1;i<x;i++)
//	{
//		int flag=0; 
//		int num=i;
//		while(num>0)
//		{
//			if(pss(num))
//			{
//				num=num/10;
//			}
//			else
//			{
//			flag=1;//标记跳过 
//			break;
//			}
//		}
//		if(flag==0)
//		ret.insert(i);
//	}
//	cout<<ret.size()<<endl;
//	set<int>::iterator it;
//	for(it=ret.begin();it!=ret.end();it++)
//	{
//		cout<<*it<<endl;
//	}
	return 0;
}
