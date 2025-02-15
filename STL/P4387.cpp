#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
stack<int> pushed;
int ru[100005],chu[100005];
int main()
{
    int n,l;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            while(!pushed.empty())
                pushed.pop();
            memset(ru,0,sizeof(ru));
            memset(chu,0,sizeof(chu));
            cin>>l;
           for(int j=1;j<=l;j++)
               {
                   cin>>ru[j];
               }
           for(int j=1;j<=l;j++)
               {
                   cin>>chu[j];
               }
            //»Î’ª
            int cnt=1;
            for(int j=1;j<=l;j++)
                {
                    if(ru[j]==chu[cnt])
                    { 
                        cnt++;
                        while(!pushed.empty()&&pushed.top()==chu[cnt])
                            {
                                cnt++;
                                pushed.pop();
                            }
                    }
                    else
                        pushed.push(ru[j]);
                }
            //≥ˆ’ª
            while(!pushed.empty())
                {
                    if(pushed.top()==chu[cnt])
                    {cnt++;pushed.pop();}
                    else
                        break;
                }
            if(!pushed.empty())
                cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    return 0;
}
