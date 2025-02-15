#include<iostream>
#include<algorithm>
using namespace std;
struct BTNode{
 int left,right;
}node[1000005];
int dg(int no)
{
    if(no==0)
        return 0;
    int left=dg(node[no].left);
    int right=dg(node[no].right);
    return max(left,right)+1;
}
int main()
{
    int n,x,y;
    cin>>n;
    for(int i=1;i<n;i++)
        {
            cin>>node[i].left>>node[i].right;
        }
    cout<<dg(1);
    return 0;
}
