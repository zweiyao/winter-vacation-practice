#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int a[105][105];
vector<pair<int,int> >g[10005];
int main()
{//假设海拔为0的速度就为1，先来找路径
    int v,r,c;
    cin>>v>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>a[i][j];
        }
    }
    //建图以时间作为边
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            int num=(r-1)*c+j;
            g[num].push_back(make_pair(num+1,1/(pow(2,(a[i][j-1]))))))));
            
        }
    }

    return 0;
}