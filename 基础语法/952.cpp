#include<bits/stdc++.h>
using namespace std;
int a[505];
int f1[505][505],f2[505][505];
int main()
{
	int n;
	cin>>n;
	int j=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
		f1[i][i]=0;
		f2[i][i]=0;
	}
	for(int len=2;len<=n;len++)
	{
		for(int i=1;i<=n-len+1;i++)
		{
			j=i+len-1;//ср╠ъ╫Г
			f2[i][j]=INT_MAX;
			for(int k=i;k<j;k++)
			{
				f1[i][j]=max(f1[i][j],f1[i][k]+f1[k+1][j]+a[j]-a[i-1]);
				f2[i][j]=min(f2[i][j],f2[i][k]+f2[k+1][j]+a[j]-a[i-1]);
			}	
		}	
	}
	cout<<f1[1][n]<<" "<<f2[1][n]<<endl;
  return 0;
}

