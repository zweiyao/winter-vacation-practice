#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    queue<int> q;
    for(int i=1;i<=n;i++)
    q.push(i);
    while(!q.empty())
        {
            cnt++;
            if(cnt%m==0)
            {
                cout<<q.front()<<" ";
                q.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
        }
    return 0;
}
