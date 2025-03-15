#include<bits/stdc++.h>
using namespace std;
set<int> s; 
map<set<int> ,int>m;
int a[4][4];
int ans[3];
int main()
{
	char ch;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cin>>ch;
			a[i][j]=(int)(ch-'A');
		}
	}
	for(int i=1;i<=3;i++)
	{
		s.clear();
		for(int j=1;j<=3;j++)
		{
			s.insert(a[i][j]);
		}
		if(s.size()<=2)
		{
			if(m.find(s)==m.end())
			{
				ans[s.size()]++;
				m[s]=1;
			}
		}
	}
	for(int j=1;j<=3;j++)
	{
		s.clear();
		for(int i=1;i<=3;i++)
		{
			s.insert(a[i][j]);
		}
		if(s.size()<=2)
		{
			if(m.find(s)==m.end())
			{
				ans[s.size()]++;
				m[s]=1;
			}
		}
	}
	s.clear();
	for(int i=1;i<=3;i++)
	{
		s.insert(a[i][i]);
	}
	if(s.size()<=2)
		{
			if(m.find(s)==m.end())
			{
				ans[s.size()]++;
				m[s]=1;
			}
		}
	s.clear();
	for(int i=1;i<=3;i++)
	{
		s.insert(a[i][4-i]);	
	}
	if(s.size()<=2)
		{
			if(m.find(s)==m.end())
			{
				ans[s.size()]++;
				m[s]=1;
			}
		}
	cout<<ans[1]<<endl;
	cout<<ans[2]<<endl;
  return 0;
}

