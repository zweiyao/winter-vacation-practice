#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int m[105][105];
int del[105],degree[105];
stack<int> st;
int n,t;
void dfs(int u)
{
    for(int i=1;i<=n;i++)
    {
        if(m[u][i])
        {
            m[u][i]=0;
            m[i][u]=0;
            dfs(i);
        }
    }
    st.push(u);
}
int main()
{

    cin>>n>>t;
    for(int i=1;i<=t;i++)
    {
        int u,v;
        cin>>u>>v;
        m[u][v]++;
        m[v][u]++;
        degree[u]++;
        degree[v]++;
    }
    int s=1;
    for(int i=1;i<=n;i++)
    {//默认存在欧拉路径
        if(degree[i]%2==1)
        s=i;
    }
    dfs(s);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}