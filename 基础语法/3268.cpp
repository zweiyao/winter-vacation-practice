#include<bits/stdc++.h>
using namespace std;
char a[105],b[105];
int f[105][105];
int num[257][257];
int main()
{
	num['A']['A']=5;
	num['A']['C']=-1;
	num['A']['G']=-2;
	num['A']['T']=-1;
	num['A']['-']=-3;
	num['C']['A']=-1;
	num['C']['C']=5;
	num['C']['G']=-3;
	num['C']['T']=-2;
	num['C']['-']=-4;
	num['G']['A']=-2;
	num['G']['C']=-3;
	num['G']['G']=5;
	num['G']['T']=-2;
	num['G']['-']=-2;
	num['T']['A']=-1;
	num['T']['C']=-2;
	num['T']['G']=-2;
	num['T']['T']=5;
	num['T']['-']=-1;
	num['-']['A']=-3;
	num['-']['C']=-4;
	num['-']['G']=-2;
	num['-']['T']=-1;
	num['-']['-']=0;
	int n,m;
	cin>>n;
	scanf("%s",a+1);
	cin>>m;
	scanf("%s",b+1);
	f[0][0]=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]=='A')
		f[i][0]=f[i-1][0]-3;
		else if(a[i]=='C')
		f[i][0]=f[i-1][0]-4;
		else if(a[i]=='G')
		f[i][0]=f[i-1][0]-2;	
		else if(a[i]=='T')
		f[i][0]=f[i-1][0]-1;
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]=='A')
		f[0][i]=f[0][i-1]-3;
		else if(b[i]=='C')
		f[0][i]=f[0][i-1]-4;
		else if(b[i]=='G')
		f[0][i]=f[0][i-1]-2;	
		else if(b[i]=='T')
		f[0][i]=f[0][i-1]-1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			f[i][j]=max(f[i-1][j]+num[a[i]]['-'],f[i][j-1]+num['-'][b[j]]);
			f[i][j]=max(f[i][j],f[i-1][j-1]+num[a[i]][b[j]]);
		}
	}
	cout<<f[n][m]<<endl;
  return 0;
}


