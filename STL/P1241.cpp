#include<iostream>
#include<stack>
#include<string>
#include<queue>
#include<cstring>
using namespace std;
struct node {
 int no;
 char b;
    node(int _no,char _b)
	{
		no=_no;
		b=_b;
	}
};
char paralell(char ch)
{
    if(ch=='(')
        return ')';
    if(ch=='[')
        return ']';
    if(ch=='{')
        return '}';
    if(ch==')')
        return '(';
    if(ch==']')
        return '[';
    if(ch=='}')
        return '{';
}
int a[101];
stack<node> st;
int main()
{
    memset(a,0,sizeof(a));
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
        {
            if(str[i]=='('||str[i]=='['||str[i]=='{')
            {
                st.push(node(i,str[i]));
            }
            else if(str[i]==')'||str[i]==']'||str[i]=='}')
            {
                if(!st.empty())
                {
                    char ch=st.top().b;
                    if(ch==paralell(str[i]))
                    {
                        a[i]=1;
                        a[st.top().no]=1;
                        st.pop();
                    }
                }
            }
        }
    queue<char> q;
    for(int i=0;i<str.size();i++)
        {
            if(a[i]==1)
            {
                q.push(str[i]);
                continue;
            }

            if(str[i]=='('||str[i]=='['||str[i]=='{')
            {
                q.push(str[i]);
                q.push(paralell(str[i]));
            }
            else if(str[i]==')'||str[i]==']'||str[i]=='}')
            {
                q.push(paralell(str[i]));
                q.push(str[i]);
            }
        }
    //Êä³ö
    while(!q.empty())
        {
            cout<<q.front();
            q.pop();
        }
    return 0;
}
