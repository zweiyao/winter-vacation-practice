#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > cowCnt=vector<vector<int> >(5000,vector<int>(5000,0));
bool cmp(const pair<int,int> &p,const pair<int,int> &q)
{
	return p.second<q.second;
}
int getAreaCnt(int x1,int y1,int x2,int y2)
{
	return cowCnt[x2][y2]-cowCnt[x2][y1-1]-cowCnt[x1-1][y2]+cowCnt[x1-1][y1-1];
}
	
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int> > p(n);
	for(int i=0;i<=n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		p[i]=make_pair(x,y);
	}
	//离散化 
	sort(p.begin(),p.end());
	for(int i=0;i<=n-1;i++)
	{
		p[i].first=i;
	}
	sort(p.begin(),p.end(),cmp);
	for(int i=0;i<n;i++)
	{
		p[i].second=i;
	}
	sort(p.begin(),p.end());//保证i与行相应 
	for(int i=0;i<=n-1;i++)
	{
		cowCnt[p[i].first+1][p[i].second+1]=1;
	}
	for(int x=1;x<=n;x++)
	for(int y=1;y<=n;y++)
	cowCnt[x][y]+=(cowCnt[x-1][y]+cowCnt[x][y-1]-cowCnt[x-1][y-1]);
	long long answer=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			int x1=min(p[i-1].second+1,p[j-1].second+1);
			int x2=max(p[i-1].second+1,p[j-1].second+1);
			answer+=getAreaCnt(1,i,x1,j)*getAreaCnt(x2,i,n,j);
		}
	}
	cout<<answer+1<<endl;
} 
