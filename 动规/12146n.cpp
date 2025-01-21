#include <bits/stdc++.h>
using namespace std;
const int N = 45;
int n,m,a[N];
int f[N][10005];
int main() {
    cin>>n;
    m=0;
    for (int i=1;i<=n;i++) {
        cin>>a[i];
        m+=a[i];
    }
    memset(f,0,sizeof f);
    f[0][0]=1;
    for (int i=1;i<=n;i++) {
        for (int j=m/2;j>=0;j--) {
            for (int k=0;k<=j&&k<=a[i];k++) {
                f[j][i]=max(f[j][i],f[j-k][i-1]);
            }
        }
    }
    int ans=0;
    for (int i=0;i<=m/2;i++) {
        if (f[i][n]) {
            ans=m-2*i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
 
 
