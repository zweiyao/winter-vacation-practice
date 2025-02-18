#include<bits/stdc++.h>
using namespace std;
string str[25];
bool cmp(string str1,string str2)
{
	return str1+str2>str2+str1;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>str[i];
	} 
	sort(str+1,str+n+1,cmp);
	for(int i=1;i<=n;i++)
	cout<<str[i];
	cout<<endl;
  return 0;
}

