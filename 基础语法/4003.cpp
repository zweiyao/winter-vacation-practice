#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	int max=a;
	if(b>max)
	{
		max=b;
	}
	return max;
}
int main()
{
	int x,y;
	while(cin>>x>>y)
	{
		cout<<max(x,y)<<endl;
	}
	return 0;
	
}
