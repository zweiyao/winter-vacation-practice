#include<bits/stdc++.h>
using namespace std;
stack<char> st;
int main()
{
	char a;
	int count=0;
	while(cin>>a)
	{
		if(a=='@')
			break;
		if(a=='(')
		st.push(a);
		if(a==')')
		{
			if(!st.empty())
			{
				st.pop();
				count++;
			}
			else
			{
				cout<<"NO"<<endl;
				exit(0);
			}
		}
	}
	if(st.empty())
	{
		cout<<count<<endl;
	}
	else
	cout<<"NO"<<endl;
	return 0;
}
