#include<bits/stdc++.h>
using namespace std;
string Spotty[105],Plain[105];
int f1[105],f2[105];
int ans;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>Spotty[i];
	for(int i=1;i<=n;i++)
		cin>>Plain[i];
	for(int i=0;i<m;i++)
	{
		memset(f1,0,sizeof(f1));
		memset(f2,0,sizeof(f2));
		for(int j=1;j<=n;j++)
			f1[(int)Spotty[j][i]]++;
		for(int j=1;j<=n;j++)
			f2[(int)Plain[j][i]]++;
	if(f1['A']&&f2['A'])continue;
		if(f1['G']&&f2['G'])continue;
		if(f1['C']&&f2['C'])continue;
		if(f1['T']&&f2['T'])continue;
		ans++;		
	}
	cout<<ans<<endl;
  return 0;
}

