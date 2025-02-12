#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int n,m;
queue<int> q;
int hah[1005];
int main()
{
    memset(hah,0,sizeof(hah));
    cin>>m>>n;
    int num,cnt=0;
    for(int i=1;i<=n;i++)
        {
            cin>>num;
            if(hah[num]==0)
            {
                cnt++;
                if((int)q.size()==m)
                {
                    int tmp=q.front();
                    hah[tmp]=0;
                    q.pop();
                }
                q.push(num);
                hah[num]=1;
            }
        }
    cout<<cnt<<endl;
    return 0;
}
