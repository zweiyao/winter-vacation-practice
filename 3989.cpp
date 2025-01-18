#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int y=2; 
	cin>>n;
	while(n>1)
	{
		if(n%y==0)
		{
			cout<<y<<" ";
			n=n/y;
		}	
		else
			y++;
	}
	cout<<endl;
	return 0;
}
