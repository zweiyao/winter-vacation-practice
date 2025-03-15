#include<iostream>
#include<algorithm>
using namespace std;
int a[105],b[105];
int main()
{
	int n;
	cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
    sort(b+1,b+n+1);
    int ans=0;
    for(int i=1;i<=n;i++)
        {
            if(a[i]!=b[i])ans++;
        }
	cout<<ans-1<<endl;
	return 0;
}

