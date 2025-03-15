#include<bits/stdc++.h>
using namespace std;
int f[1005][1005];
int main()
{
	string str;
	cin>>str;
	cout<<str<<endl;
	int ans=1;
	for(int i=0;i<str.size();i++)
	{
		f[i][i]=1;
		if(i!=str.size()-1&&str[i]==str[i+1])
		{
			f[i][i+1]=1;
			ans=2;
		}
	}
	for(int len=3;len<=str.size();len++)
	{
		for(int i=0;i<=str.size()-len;i++)
		{
			if(str[i]==str[i+len-1]&&f[i+1][i+len-2]==1)
			{
				f[i][i+len-1]=1;
				ans=len;
			}
		}
	}
	cout<<ans;
  return 0;
}

