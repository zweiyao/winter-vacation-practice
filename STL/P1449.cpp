#include<iostream>
#include<stack>
using namespace std;
stack<int> st;
int main()
{
    char ch;
    int num=0,x,y;
    
    while(cin>>ch)
        {
            if(ch=='@')
                break;
            if(ch>='0'&&ch<='9')
                num=num*10+ch-48;
            else if(ch=='.')
            {
                st.push(num);
                num=0;
            }
            else if(ch=='+')
            {
                y=st.top();st.pop();
                x=st.top();st.pop();
                st.push(x+y);
            }
            else if(ch=='-')
            {
                y=st.top();st.pop();
                x=st.top();st.pop();
                st.push(x-y);
            }
            else if(ch=='*')
            {
                y=st.top();st.pop();
                x=st.top();st.pop();
                st.push(x*y);
            }
            else if(ch=='/')
            {
                y=st.top();st.pop();
                x=st.top();st.pop();
                st.push(x/y);
            }
        }
    cout<<st.top()<<endl;
    return 0;
}

