#include<bits/stdc++.h>
using namespace std;
int c[10];
int f[10][305];
int main()
{
	 int n,k;
	 cin>>n>>k;
	 for(int i=1;i<=k;i++)
	 {
	 	cin>>c[i];
	 }
	 f[0][0]=1;
	 for(int i=1;i<=k;i++)
	 {
	 	for(int j=0;j<=n;j++)
	 	{
	 		if(j<c[i])
	 		f[i][j]=f[i-1][j];
			else
			f[i][j]=f[i-1][j]+f[i][j-c[i]];	
		}
	 }
	 cout<<f[k][n]<<endl;
  return 0;
}

