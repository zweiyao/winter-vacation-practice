#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,q,t,i,j,k;
    cin>>n>>q;
    vector<vector<int>> v(n+1);
    for(int z=0;z<q;z++)
    {
        cin>>t;
        if(t==1)
        {
            cin>>i>>j>>k;
            if(v[i].size()<j+1)
                v[i].resize(j+1);
            v[i][j]=k;
        }
        else
        {
            cin>>i>>j;
            cout<<v[i][j]<<endl;
        }
    }
    return 0;
}
