#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,n;
	cin>>x>>y;
	if(x<=y) n=x;
	else n=y;
	for(int i=1;i<=n;i++)
	{
		if(x%i==0&&y%i==0)
		{
			cout<<i<<endl;
		}
	}
	cout<<endl;
	
	return 0;
}
