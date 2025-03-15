#include<bits/stdc++.h>
using namespace std;
int a[405];
long long f[405][405];
long long fm[405][405];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[n+i]=a[i];	
	}	
	for(int i=1;i<=2*n-1;i++)
	{
		a[i]+=a[i-1];;
	}
	int d=2;
	memset(fm,0x3f,sizeof(fm));
	for(int i=0;i<=2*n-1;i++)
	{
		fm[i][i]=0;
	}
	while(d<=n)
	{
		for(int l=1;l<=2*n-d;l++)
		{
			int r=l+d-1;
			for(int k=l;k<r;k++)
			{
				f[l][r]=max(f[l][r],f[l][k]+f[k+1][r]+a[r]-a[l-1]);
				fm[l][r]=min(fm[l][r],fm[l][k]+fm[k+1][r]+a[r]-a[l-1]);
			}
		}
		d++;
	}
	long long ans=0;
	long long ansm=2147483647;
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,f[i][i+n-1]);
		ansm=min(ansm,fm[i][i+n-1]);
//		cout<<f[i][i+n-1]<<endl;
	}
	cout<<ansm<<" "<<ans<<"\n";
    return 0;
}

