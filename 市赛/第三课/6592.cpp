#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	if(a>b)swap(a,b);
	if(x>y)swap(x,y);
	int len1=abs(a-x)+abs(b-y);
	int len2=abs(b-a);
	int len=min(len1,len2);
	cout<<len<<endl;
  return 0;
}

