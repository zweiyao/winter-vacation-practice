#include<bits/stdc++.h>
using namespace std;
int r[100050];
int main()
{
	int n,k,r1;
	cin>>n>>k>>r1;
	string s;
	r[1]=r1;
	if(r[1]%4==0)
	s+='A';
	else if(r[1]%4==1)
	s+='T';	
	else if(r[1]%4==2)
	s+='C';	
	else if(r[1]%4==3)
	s+='G';
	for(int i=2;i<=n;i++)
	{
		r[i]=(r[i-1]*6807+2831)%201701;
			if(r[i]%4==0)
				s+='A';
			else if(r[i]%4==1)
				s+='T';	
			else if(r[i]%4==2)
				s+='C';	
			else if(r[i]%4==3)
				s+='G';
	}
	set<string> a;
	set<char>:: iterator it;
	string str;
	for(int i=0;i<=n-k;i++)
	{
		str="";
		for(int j=0;j<k;j++)
		{
			str+=s[i+j];
		}
		a.insert(str);
	}
	cout<<a.size()<<endl;
	return 0;
}
