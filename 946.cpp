#include<bits/stdc++.h>
using namespace std;
int w[105],v[105],aw[105],av[105],bw[105],bv[105];
int f[105][200005];
int main()
{
	int tot,n;
	cin>>tot>>n;
	memset(w,-1,sizeof(w));
	memset(aw,-1,sizeof(aw));
	memset(bw,-1,sizeof(bw));
	for(int i=1;i<=n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(c==0)
		{
			w[i]=a;
			v[i]=a*b;
		}
		else
		{
			if(aw[c]==-1)
			{
				aw[c]=a;
				av[c]=a*b;
			}
			else
			{
				bw[c]=a;
				bv[c]=a*b;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(w[i]==-1)
		{//¸½ÊôÆ·Ìø¹ý 
			for(int j=0;j<=tot;j++)
			f[i][j]=f[i-1][j];
		}
		else
		{
			for(int j=0;j<=tot;j++)
			{
				f[i][j]=f[i-1][j];
				if(j>=w[i])f[i][j]=max(f[i][j],f[i-1][j-w[i]]+v[i]);
				if(aw[i]!=-1&&j>=w[i]+aw[i])f[i][j]=max(f[i][j],f[i-1][j-w[i]-aw[i]]+v[i]+av[i]);
				if(bw[i]!=-1&&j>=w[i]+bw[i])
				{
					f[i][j]=max(f[i][j],f[i-1][j-w[i]-bw[i]]+v[i]+bv[i]);
					f[i][j]=max(f[i][j],f[i-1][j-w[i]-aw[i]-bw[i]]+v[i]+av[i]+bv[i]);
				}
			}
		}
	}
	cout<<f[n][tot]<<endl;
  return 0;
}

