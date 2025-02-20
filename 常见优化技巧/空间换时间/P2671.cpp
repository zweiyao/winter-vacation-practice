#include<iostream>
using namespace std;
#define mod 10007
int a[100005],b[100005];
int s1[100005][2],s2[100005][2];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
            cin>>a[i];
    for(int i=1;i<=n;i++)
        {
            cin>>b[i];
            s1[b[i]][i%2]++;
            s2[b[i]][i%2]=(s2[b[i]][i%2]+a[i])%mod;
        }
    long long ans=0;
    for(int i=1;i<=n;i++)
        {
            int y=b[i];//·ÅÑÕÉ«
            ans+=(i*(((s1[y][i%2]-2)*a[i])%mod+s2[y][i%2])%mod)%mod;
            ans%=mod;
        }
        cout<<ans<<endl;
    return 0;
}
