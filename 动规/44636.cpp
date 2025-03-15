#include<bits/stdc++.h>
using namespace std;
int f[25][25];
char a[25],b[25];
int main()
{
	scanf("%s",a+1);
	scanf("%s",b+1);
	int l1=strlen(a+1);
	int l2=strlen(b+1);
	f[0][0]=1;
	int cnt=1;
	while(a[cnt]=='*')
	{
		f[cnt][0]=1;
		cnt++;
	}
	for(int i=1;i<=l1;i++)
	{
		for(int j=1;j<=l2;j++)
		{
			if(a[i]=='?'||a[i]==b[j])
			f[i][j]=f[i-1][j-1];
			else if(a[i]=='*')
			f[i][j]=f[i-1][i-1];
			else 
			f[i][j]=0;
		}
	}
	if(f[l1][l2])cout<<"matched"<<endl;
	else cout<<"not matched"<<endl;
  return 0;
}

