#include<bits/stdc++.h>
using namespace std;
map<char,int> m;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;	
		int flag=0;
		m.clear();
		for(int i=0;i<s.size()-1;i++)
		{
			if(m[s[i]])
			{
				cout<<"Yes"<<"\n";
				flag=1;
				break;
			}
			else
			{
				m[s[i]]++;
			}
		}
		if(flag==1)continue;
		m.clear();
		for(int i=1;i<s.size();i++)
		{
			if(m[s[i]])
			{
				cout<<"Yes"<<"\n";
				flag=1;
				break;
			}
			else
			{
				m[s[i]]++;
			}
		}
		if(flag==1)continue;
		else cout<<"No"<<"\n";
	}
	return 0;
}
