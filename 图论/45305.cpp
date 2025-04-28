#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int main()
{
  int n;
  cin >> n;
  int u,v,k;
  for (int i = 1; i <= n; i++)
  {
  	cin>>u>>k;
  	while(k--)
  	{
  		cin>>v;
		a[u][v]=1;	
	}
  }
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=n;j++)
  	cout<<a[i][j]<<" ";
  	cout<<endl;
  }
  return 0;
}
