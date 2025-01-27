#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005],c[1005];
void reverse_arr(string str,int a[])
{
	int len=str.size();
	memset(a,0,sizeof(a));
	reverse(str.begin(),str.end());
	for(int i=0;i<str.size();i++)
	{
		a[i]=str[i]-48;
	}
}
void sub_binary(int a[],int b[],int c[],int& lc)
{
	for(int i=0;i<lc;i++)
		c[i]=a[i]-b[i];
	int jw=0;
	for(int i=0;i<lc;i++)
	{
		c[i]-=jw;
		if(c[i]<0)
		{
			jw=1;
			c[i]=c[i]+10;
		}
		else
		jw=0;
	}
	while(lc>1&&c[lc-1]==0) lc--;
}
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	reverse_arr(str1,a);
	reverse_arr(str2,b);
	int lc=str1.size();
	sub_binary(a,b,c,lc);
	for(int i=lc-1;i>=0;i--)
	{
		cout<<c[i];
	}
	cout<<endl;
  return 0;
}

