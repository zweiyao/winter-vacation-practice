#include<bits/stdc++.h>
using namespace std;
queue<int> q;
set<int> ret;//按序号大小放答案 
int main()
{
	int n,k,p;
	cin>>n>>k>>p;
	int m=k/n;
	for(int i=0;i<k;i++)
	{
		q.push(i+1);
	}
	for(int t=0;t<m;t++)
	{//一共m张good牌 
	for(int i=0;i<n;i++)
	{//每人都发一张牌 
	//最后一轮循环给Bessis发 
	if(i==n-1)
	ret.insert(q.front());
	q.pop();
	//放底 
	for(int j=0;j<p;j++)
	{
		q.push(q.front());
		q.pop();
	}
	}
	}
	set<int>::iterator it;
	for(it=ret.begin();it!=ret.end();it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}
