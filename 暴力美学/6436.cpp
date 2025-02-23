#include<iostream>
using namespace std;
int a[15][21],ans[21][21];
int main()
{
    int k,n;
    cin>>k>>n;
    for(int i=1;i<=k;i++)
        {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
        for(int j=1;j<n;j++)
            {
             for(int t=j+1;t<=n;t++)
                ans[a[i][j]][a[i][t]]++;
            }
        }
    int s=0;
   for(int i=1;i<=n;i++)
       {
            for(int j=1;j<=n;j++)
                {
                    if(ans[i][j]==k)
                        s++;
                }
       }
    cout<<s<<endl;
    return 0;
}
