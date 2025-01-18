#include<bits/stdc++.h>
using namespace std;
stack<char> st;
int main()
{
	string s;
	while(cin>>s)
	{
		//«Â’ª 
		while(!st.empty())
		st.pop();
		int flag=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='('||s[i]=='[')
			st.push(s[i]);
			if(s[i]==')')
			{
				if(!st.empty()&&st.top()=='(')
				st.pop();
				else
				{
					cout<<"False"<<endl;
					flag=1;
					break;
				}
			}
			if(s[i]==']')
			{
				if(!st.empty()&&st.top()=='[')
				st.pop();
				else
				{
					cout<<"False"<<endl;
					flag=1;
					break;
				}
			}
			if(s[i]=='/')
			{
				if(!st.empty()&&st.top()=='/')
				{
					st.pop();
				}
				else
				st.push(s[i]);
			}
			if(s[i]=='*')
			{
				if(!st.empty()&&st.top()=='*')
				{
					st.pop();
				}
				else
				st.push(s[i]);
			}
			
		}
		if(flag==0)
		{
		if(st.empty())
		cout<<"True"<<endl;
		else
		cout<<"False"<<endl;
		}
		
	}
	return 0;
}
